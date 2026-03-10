#if defined(D_NEXYS_A7)
#include <bsp_mem_map.h>
#include <bsp_printf.h>
#include <bsp_version.h>
#else
PRE_COMPILED_MSG("no platform was defined")
#endif
#include <psp_api.h>

#include <ctype.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Memory map (Wishbone peripherals behind AXI2WB window at 0x8000_0000)
#define SHA3_BASE_ADDR         0x80001D00u
#define UART_BASE_ADDR         0x80002000u

#define MMIO32(addr)           (*(volatile uint32_t *)(addr))

/* Print a 32-bit word as 8 hex chars without adding newlines. Uses putchar()
 * which is wired to UART output in the BSP, avoiding printfNexys' trailing newline.
 */
static void print_hex_u32(uint32_t w) {
    const char hex[] = "0123456789abcdef";
    char buf[8];
    int i;
    for (i = 7; i >= 0; --i) {
        buf[i] = hex[w & 0xF];
        w >>= 4;
    }
    for (i = 0; i < 8; ++i) putchar(buf[i]);
}

#define SHA3_CONTROL           MMIO32(SHA3_BASE_ADDR + 0x00u)
#define SHA3_STATUS            MMIO32(SHA3_BASE_ADDR + 0x04u)
#define SHA3_IN_FIFO_DATA      MMIO32(SHA3_BASE_ADDR + 0x08u)
#define SHA3_OUT_FIFO_DATA     MMIO32(SHA3_BASE_ADDR + 0x10u)
#define SHA3_MSG_LEN_LO        MMIO32(SHA3_BASE_ADDR + 0x18u)
#define SHA3_MSG_LEN_HI        MMIO32(SHA3_BASE_ADDR + 0x1Cu)

#define UART_RX_DATA           MMIO32(UART_BASE_ADDR + 0x00u)
#define UART_LINE_STATUS       MMIO32(UART_BASE_ADDR + 0x14u)

#define SHA3_CTRL_START        (1u << 0)
#define SHA3_CTRL_ABORT        (1u << 2)
#define SHA3_CTRL_MODE_SHIFT   3u
#define SHA3_CTRL_MODE_MASK    (3u << SHA3_CTRL_MODE_SHIFT)

#define SHA3_ST_IDLE           (1u << 0)
#define SHA3_ST_DONE           (1u << 2)
#define SHA3_ST_IN_FULL        (1u << 5)
#define SHA3_ST_ERR_MASK       ((1u << 8) | (1u << 9) | (1u << 10))

#define UART_LSR_DR            (1u << 0)

/* Maximum UART command line (including command verb and message text). */
/* Reduced because large messages are now streamed via STREAM/DATASTR/END */
#define UART_CMD_MAX_LEN       32768u

/* DATASTR line format: "DATASTR <len>:<payload>" */
#define DATASTR_FIXED_CHARS    9u   /* "DATASTR " + ':' */

/* SHA3 completion wait budget: base + (bytes * slope), saturated at UINT32 max. */
#define SHA3_WAIT_BASE_CYCLES      40000000u
#define SHA3_WAIT_PER_BYTE_CYCLES  20000u

typedef enum {
    SHA3_MODE_224 = 0,
    SHA3_MODE_256 = 1,
    SHA3_MODE_384 = 2,
    SHA3_MODE_512 = 3
} sha3_mode_t;

static uint32_t sha3_digest_words(sha3_mode_t mode) {
    switch (mode) {
        case SHA3_MODE_224: return 7u;
        case SHA3_MODE_256: return 8u;
        case SHA3_MODE_384: return 12u;
        default: return 16u;
    }
}

static uint32_t sha3_mode_bits(sha3_mode_t mode) {
    switch (mode) {
        case SHA3_MODE_224: return 224u;
        case SHA3_MODE_256: return 256u;
        case SHA3_MODE_384: return 384u;
        default: return 512u;
    }
}

static uint32_t sha3_pack_u32_be(const uint8_t *p, size_t n) {
    uint32_t w = 0u;
    if (n > 0u) w |= ((uint32_t)p[0]) << 24;
    if (n > 1u) w |= ((uint32_t)p[1]) << 16;
    if (n > 2u) w |= ((uint32_t)p[2]) << 8;
    if (n > 3u) w |= ((uint32_t)p[3]) << 0;
    return w;
}

static void sha3_reset(void) {
    uint32_t mode_bits = SHA3_CONTROL & SHA3_CTRL_MODE_MASK;
    SHA3_CONTROL = mode_bits | SHA3_CTRL_ABORT;
    while ((SHA3_STATUS & SHA3_ST_IDLE) == 0u) {
    }
}

static void sha3_set_mode(sha3_mode_t mode) {
    uint32_t ctrl = SHA3_CONTROL & ~SHA3_CTRL_MODE_MASK;
    ctrl |= ((uint32_t)mode << SHA3_CTRL_MODE_SHIFT) & SHA3_CTRL_MODE_MASK;
    SHA3_CONTROL = ctrl;
}

static void sha3_set_msglen(uint64_t len_bytes) {
    SHA3_MSG_LEN_LO = (uint32_t)(len_bytes & 0xFFFFFFFFull);
    SHA3_MSG_LEN_HI = (uint32_t)(len_bytes >> 32);
}

static void sha3_write_word(uint32_t w) {
    while (SHA3_STATUS & SHA3_ST_IN_FULL) {
    }
    SHA3_IN_FIFO_DATA = w;
}

static void sha3_write_bytes(const uint8_t *data, size_t len) {
    size_t i;
    for (i = 0; i < len; i += 4u) {
        size_t rem = len - i;
        size_t n = (rem >= 4u) ? 4u : rem;
        sha3_write_word(sha3_pack_u32_be(&data[i], n));
    }
}

static void sha3_start(void) {
    uint32_t mode_bits = SHA3_CONTROL & SHA3_CTRL_MODE_MASK;
    SHA3_CONTROL = mode_bits | SHA3_CTRL_START;
}

static int sha3_wait_done(uint32_t timeout_cycles) {
    while (timeout_cycles--) {
        uint32_t st = SHA3_STATUS;
        if (st & SHA3_ST_ERR_MASK) {
            return -1;
        }
        if (st & SHA3_ST_DONE) {
            return 0;
        }
    }
    return -2;
}

static uint32_t sha3_timeout_cycles_for_len(size_t msg_len) {
    uint32_t msg_u32;

    if (msg_len > 0xFFFFFFFFu) {
        return 0xFFFFFFFFu;
    }

    msg_u32 = (uint32_t)msg_len;
    if (msg_u32 > ((0xFFFFFFFFu - SHA3_WAIT_BASE_CYCLES) / SHA3_WAIT_PER_BYTE_CYCLES)) {
        return 0xFFFFFFFFu;
    }

    return SHA3_WAIT_BASE_CYCLES + (msg_u32 * SHA3_WAIT_PER_BYTE_CYCLES);
}

static void sha3_read_digest(uint32_t *out_words, uint32_t count) {
    uint32_t i;
    for (i = 0; i < count; i++) {
        out_words[i] = SHA3_OUT_FIFO_DATA;
    }
}

/* Streaming state for incremental input */
static int stream_active = 0;
static uint64_t stream_expected_len = 0ull;
static uint64_t stream_received = 0ull;
static uint8_t stream_partial[4];
static size_t stream_partial_len = 0u;
static int stream_binary_mode = 0;  /* 1 if waiting for raw binary data, 0 if expecting DATASTR commands */

static void stream_reset_state(void) {
    stream_active = 0;
    stream_expected_len = 0ull;
    stream_received = 0ull;
    stream_partial_len = 0u;
    stream_binary_mode = 0;
}

/* Helper: write arbitrary bytes into SHA3 input using 32-bit big-endian packing */
static void sha3_stream_write_bytes(const uint8_t *data, size_t len) {
    size_t i = 0u;

    /* if we have a partial word from before, complete it first */
    if (stream_partial_len && len) {
        while (stream_partial_len < 4u && i < len) {
            stream_partial[stream_partial_len++] = data[i++];
            stream_received++;
        }
        if (stream_partial_len == 4u) {
            sha3_write_word(sha3_pack_u32_be(stream_partial, 4));
            stream_partial_len = 0u;
        }
    }

    /* write full words directly */
    for (; i + 4u <= len; i += 4u) {
        sha3_write_word(sha3_pack_u32_be(&data[i], 4));
        stream_received += 4ull;
    }

    /* buffer any remaining tail bytes */
    while (i < len) {
        stream_partial[stream_partial_len++] = data[i++];
        stream_received++;
    }
}

static void sha3_stream_finalize_and_reply(sha3_mode_t mode, size_t timeout_len) {
    if (stream_partial_len > 0u) {
        sha3_write_word(sha3_pack_u32_be(stream_partial, stream_partial_len));
        stream_partial_len = 0u;
    }

    if (sha3_wait_done(sha3_timeout_cycles_for_len(timeout_len)) != 0) {
        printfNexys("ERR HASH hw_status=0x%x\n", SHA3_STATUS);
        return;
    }

    {
        uint32_t outw[16];
        uint32_t wc = sha3_digest_words(mode);
        const char *hdr = "OK HASH ";
        const char *h = hdr;
        while (*h) putchar(*h++);
        sha3_read_digest(outw, wc);
        for (uint32_t ii = 0; ii < wc; ii++) print_hex_u32(outw[ii]);
        putchar('\n');
    }
}

static int sha3_hash_message(sha3_mode_t mode,
                             const uint8_t *msg,
                             size_t msg_len,
                             uint32_t *digest_words,
                             uint32_t *word_count) {
    uint32_t words = sha3_digest_words(mode);

    sha3_reset();
    sha3_set_mode(mode);
    sha3_set_msglen((uint64_t)msg_len);
    sha3_start();

    /*
     * Stream input after START so messages larger than the 64-word
     * input FIFO do not deadlock while waiting for space.
     */
    sha3_write_bytes(msg, msg_len);

    if (sha3_wait_done(sha3_timeout_cycles_for_len(msg_len)) != 0) {
        return -1;
    }

    sha3_read_digest(digest_words, words);
    *word_count = words;
    return 0;
}

static int str_ieq(const char *a, const char *b) {
    while (*a && *b) {
        if (tolower((unsigned char)*a) != tolower((unsigned char)*b)) {
            return 0;
        }
        a++;
        b++;
    }
    return (*a == '\0' && *b == '\0');
}

static int starts_with_ci(const char *s, const char *prefix) {
    while (*prefix) {
        if (tolower((unsigned char)*s) != tolower((unsigned char)*prefix)) {
            return 0;
        }
        s++;
        prefix++;
    }
    return 1;
}

static const char *skip_spaces(const char *s) {
    while (*s == ' ' || *s == '\t') {
        s++;
    }
    return s;
}

static int parse_mode_value(const char *s, sha3_mode_t *mode_out) {
    if (str_ieq(s, "224")) {
        *mode_out = SHA3_MODE_224;
        return 0;
    }
    if (str_ieq(s, "256")) {
        *mode_out = SHA3_MODE_256;
        return 0;
    }
    if (str_ieq(s, "384")) {
        *mode_out = SHA3_MODE_384;
        return 0;
    }
    if (str_ieq(s, "512")) {
        *mode_out = SHA3_MODE_512;
        return 0;
    }
    return -1;
}

static size_t decimal_digits_u64(uint64_t value) {
    size_t digits = 1u;
    while (value >= 10ull) {
        value /= 10ull;
        digits++;
    }
    return digits;
}

static size_t uart_max_datastr_payload_len(void) {
    const size_t max_line_chars = UART_CMD_MAX_LEN - 1u;
    const size_t fixed_chars = DATASTR_FIXED_CHARS;
    size_t payload_max = (max_line_chars > fixed_chars) ? (max_line_chars - fixed_chars) : 0u;

    while (payload_max > 0u) {
        size_t digits = decimal_digits_u64((uint64_t)payload_max);
        if ((fixed_chars + digits + payload_max) <= max_line_chars) {
            return payload_max;
        }
        payload_max--;
    }

    return 0u;
}

static int uart_read_line(char *out, size_t max_len) {
    size_t n = 0u;
    int truncated = 0;

    while (1) {
        while ((UART_LINE_STATUS & UART_LSR_DR) == 0u) {
        }

        char c = (char)(UART_RX_DATA & 0xFFu);
        if (c == '\r') {
            continue;
        }

        if (c == '\n') {
            out[n] = '\0';
            return truncated ? 1 : 0;
        }

        if (c == '\b' || c == 0x7F) {
            if (n > 0u) {
                n--;
            }
            continue;
        }

        if (n + 1u < max_len) {
            out[n++] = c;
        } else {
            truncated = 1;
        }
    }
}

/* Read binary data directly from UART (no line parsing) */
static int uart_read_binary(uint8_t *out, size_t len) {
    size_t n = 0u;
    while (n < len) {
        while ((UART_LINE_STATUS & UART_LSR_DR) == 0u) {
        }
        out[n++] = (uint8_t)(UART_RX_DATA & 0xFFu);
    }
    return 0;
}

static void print_digest(const uint32_t *digest, uint32_t count) {
    uint32_t i;
    for (i = 0; i < count; i++) {
        print_hex_u32(digest[i]);
    }
}

int main(void) {
    static char cmd[UART_CMD_MAX_LEN];
    sha3_mode_t mode = SHA3_MODE_256;
    const size_t max_datastr_chunk = uart_max_datastr_payload_len();

    uartInit();

    printfNexys("OK READY sha3-uart-iface mode=%u\n", (unsigned)sha3_mode_bits(mode));
    printfNexys("OK HELP commands: STATUS | ABORT | LIMITS | MODE <224|256|384|512> | HASH <text> | STREAM <len> | DATASTR <len>:<text-chunk> | END | PING\n");

    while (1) {
        uint32_t digest[16];
        uint32_t words = 0u;
        uint32_t st;

        int line_rc = uart_read_line(cmd, sizeof(cmd));
        if (line_rc != 0) {
            printfNexys("ERR LINE_TOO_LONG max=%u\n", (unsigned)(UART_CMD_MAX_LEN - 1u));
            continue;
        }

        const char *line = skip_spaces(cmd);
        if (*line == '\0') {
            continue;
        }

        if (str_ieq(line, "PING")) {
            printfNexys("OK PONG\n");
            continue;
        }

        if (str_ieq(line, "STATUS")) {
            st = SHA3_STATUS;
            printfNexys("OK STATUS mode=%u status=0x%x idle=%u done=%u in_full=%u err=0x%x\n",
                        (unsigned)sha3_mode_bits(mode),
                        st,
                        (unsigned)((st & SHA3_ST_IDLE) ? 1u : 0u),
                        (unsigned)((st & SHA3_ST_DONE) ? 1u : 0u),
                        (unsigned)((st & SHA3_ST_IN_FULL) ? 1u : 0u),
                        (unsigned)(st & SHA3_ST_ERR_MASK));
            continue;
        }

        if (str_ieq(line, "ABORT")) {
            sha3_reset();
            stream_reset_state();
            printfNexys("OK ABORT\n");
            continue;
        }

        if (str_ieq(line, "LIMITS")) {
            printfNexys("OK LIMITS uart_cmd_max=%u datastr_payload_max=%u\n",
                        (unsigned)UART_CMD_MAX_LEN,
                        (unsigned)max_datastr_chunk);
            continue;
        }

        if (starts_with_ci(line, "MODE")) {
            const char *arg = skip_spaces(line + 4);
            sha3_mode_t new_mode;
            if (*arg == '\0' || parse_mode_value(arg, &new_mode) != 0) {
                printfNexys("ERR MODE expected one of 224/256/384/512\n");
                continue;
            }
            mode = new_mode;
            sha3_set_mode(mode);
            printfNexys("OK MODE %u\n", (unsigned)sha3_mode_bits(mode));
            continue;
        }

        /* STREAM <len> - begin streaming a message of <len> bytes into the SHA3 engine
         * DATASTR <len>:<text-chunk> - send a validated text chunk. Multiple DATASTR
         *                              commands will be concatenated.
         * END - finish streaming and compute hash.
         */
        if (starts_with_ci(line, "STREAM")) {
            const char *arg = skip_spaces(line + 6);
            if (*arg == '\0') {
                printfNexys("ERR STREAM expected length\n");
                continue;
            }
            if (stream_active) {
                printfNexys("ERR STREAM already active recv=%lu expected=%lu\n",
                            (unsigned long)stream_received,
                            (unsigned long)stream_expected_len);
                continue;
            }
            char *endptr = NULL;
            unsigned long long len = strtoull(arg, &endptr, 0);
            if (endptr == arg) {
                printfNexys("ERR STREAM invalid length\n");
                continue;
            }

            /* Check if BINARY mode is requested */
            const char *mode_arg = skip_spaces(endptr);
            int use_binary = 0;
            if (starts_with_ci(mode_arg, "BINARY")) {
                use_binary = 1;
            }

            /* initialize streaming state */
            stream_active = 1;
            stream_binary_mode = use_binary;
            stream_expected_len = (uint64_t)len;
            stream_received = 0ull;
            stream_partial_len = 0u;

            /* prepare SHA3 engine and start streaming immediately */
            sha3_reset();
            sha3_set_mode(mode);
            sha3_set_msglen(stream_expected_len);
            sha3_start();

            if (use_binary) {
                /* Send acknowledgment before reading binary data */
                printfNexys("OK STREAM BINARY ready=%lu\n", (unsigned long)stream_expected_len);
                
                /* In binary mode, read raw data directly without waiting for DATASTR commands */
                uint8_t binary_buffer[256];
                while (stream_received < stream_expected_len) {
                    uint64_t remaining = stream_expected_len - stream_received;
                    size_t to_read = (remaining > (uint64_t)sizeof(binary_buffer)) ? sizeof(binary_buffer) : (size_t)remaining;
                    
                    uart_read_binary(binary_buffer, to_read);
                    sha3_stream_write_bytes(binary_buffer, to_read);
                }
                
                /* Binary data reception complete; stream_active stays 1 so END can finalize */
                stream_binary_mode = 0;
            } else {
                printfNexys("OK STREAM START len=%lu\n", (unsigned long)stream_expected_len);
            }
            continue;
        }

        if (starts_with_ci(line, "DATASTR")) {
            const char *arg = line + 7;
            const char *data_ptr;
            size_t bi;

            if (!stream_active) {
                printfNexys("ERR DATASTR no active stream\n");
                continue;
            }

            /* Format: DATASTR <len>:<raw-text> */
            arg = skip_spaces(arg);
            if (*arg == '\0') {
                printfNexys("ERR DATASTR no bytes parsed\n");
                continue;
            }

            {
                char *endptr = NULL;
                unsigned long long declared_len = strtoull(arg, &endptr, 10);
                if (endptr == arg || *endptr != ':') {
                    printfNexys("ERR DATASTR invalid format (expected <len>:<text>)\n");
                    sha3_reset();
                    stream_reset_state();
                    continue;
                }
                
                data_ptr = endptr + 1;
                bi = strlen(data_ptr);
                if (declared_len != (unsigned long long)bi) {
                    printfNexys("ERR DATASTR length mismatch declared=%lu actual=%lu\n",
                                (unsigned long)declared_len,
                                (unsigned long)bi);
                    sha3_reset();
                    stream_reset_state();
                    continue;
                }
            }

            {
                if (bi == 0u) {
                    printfNexys("ERR DATASTR no bytes parsed\n");
                    continue;
                }

                if (bi > max_datastr_chunk) {
                    printfNexys("ERR DATASTR chunk too large size=%lu max=%u\n",
                                (unsigned long)bi,
                                (unsigned)max_datastr_chunk);
                    sha3_reset();
                    stream_reset_state();
                    continue;
                }

                if ((stream_received + (uint64_t)bi) > stream_expected_len) {
                    printfNexys("ERR DATASTR too much data recv=%lu expected=%lu\n",
                                (unsigned long)(stream_received + (uint64_t)bi),
                                (unsigned long)stream_expected_len);
                    sha3_reset();
                    stream_reset_state();
                    continue;
                }

                sha3_stream_write_bytes((const uint8_t *)data_ptr, bi);
            }

            /* Send ACK for flow control (not validation - that happens at END) */
            printfNexys("OK DATASTR\n");
            continue;
        }

        if (starts_with_ci(line, "END")) {
            if (!stream_active) {
                printfNexys("ERR END no active stream\n");
                continue;
            }

            if (stream_received != stream_expected_len) {
                printfNexys("ERR END length mismatch recv=%lu expected=%lu\n",
                            (unsigned long)stream_received,
                            (unsigned long)stream_expected_len);
                sha3_reset();
                stream_reset_state();
                continue;
            }

            sha3_stream_finalize_and_reply(mode, (size_t)stream_received);
            stream_reset_state();
            continue;
        }

        if (starts_with_ci(line, "HASH")) {
            const char *msg = line + 4;
            if (*msg == ' ') {
                /*
                 * Consume one separator after command verb.
                 * Preserve remaining bytes exactly as message payload.
                 */
                msg++;
            }
            size_t len = strlen(msg);

            if (sha3_hash_message(mode, (const uint8_t *)msg, len, digest, &words) != 0) {
                printfNexys("ERR HASH hw_status=0x%x\n", SHA3_STATUS);
                continue;
            }

            {
                const char *hdr = "OK HASH ";
                const char *h = hdr;
                while (*h) putchar(*h++);
                print_digest(digest, words);
                putchar('\n');
            }
            continue;
        }

        printfNexys("ERR UNKNOWN command\n");
    }

    return 0;
}
