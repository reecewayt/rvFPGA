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
#include <string.h>

// Memory map (Wishbone peripherals behind AXI2WB window at 0x8000_0000)
#define SHA3_BASE_ADDR         0x80001D00u
#define LED_BASE_ADDR          0x80001400u
#define UART_BASE_ADDR         0x80002000u

#define MMIO32(addr)           (*(volatile uint32_t *)(addr))

#define SHA3_CONTROL           MMIO32(SHA3_BASE_ADDR + 0x00u)
#define SHA3_STATUS            MMIO32(SHA3_BASE_ADDR + 0x04u)
#define SHA3_IN_FIFO_DATA      MMIO32(SHA3_BASE_ADDR + 0x08u)
#define SHA3_OUT_FIFO_DATA     MMIO32(SHA3_BASE_ADDR + 0x10u)
#define SHA3_MSG_LEN_LO        MMIO32(SHA3_BASE_ADDR + 0x18u)
#define SHA3_MSG_LEN_HI        MMIO32(SHA3_BASE_ADDR + 0x1Cu)

#define UART_RX_DATA           MMIO32(UART_BASE_ADDR + 0x00u)
#define UART_LINE_STATUS       MMIO32(UART_BASE_ADDR + 0x14u)

#define STATUS_REG             MMIO32(LED_BASE_ADDR)

#define SHA3_CTRL_START        (1u << 0)
#define SHA3_CTRL_ABORT        (1u << 2)
#define SHA3_CTRL_MODE_SHIFT   3u
#define SHA3_CTRL_MODE_MASK    (3u << SHA3_CTRL_MODE_SHIFT)

#define SHA3_ST_IDLE           (1u << 0)
#define SHA3_ST_DONE           (1u << 2)
#define SHA3_ST_IN_FULL        (1u << 5)
#define SHA3_ST_ERR_MASK       ((1u << 8) | (1u << 9) | (1u << 10))

#define UART_LSR_DR            (1u << 0)

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

static void sha3_read_digest(uint32_t *out_words, uint32_t count) {
    uint32_t i;
    for (i = 0; i < count; i++) {
        out_words[i] = SHA3_OUT_FIFO_DATA;
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
    sha3_write_bytes(msg, msg_len);
    sha3_start();

    if (sha3_wait_done(40000000u) != 0) {
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

static int uart_read_line(char *out, size_t max_len) {
    size_t n = 0u;

    while (1) {
        while ((UART_LINE_STATUS & UART_LSR_DR) == 0u) {
        }

        char c = (char)(UART_RX_DATA & 0xFFu);
        if (c == '\r') {
            continue;
        }

        if (c == '\n') {
            out[n] = '\0';
            return 0;
        }

        if (c == '\b' || c == 0x7F) {
            if (n > 0u) {
                n--;
            }
            continue;
        }

        if (n + 1u < max_len) {
            out[n++] = c;
        }
    }
}

static void print_digest(const uint32_t *digest, uint32_t count) {
    uint32_t i;
    for (i = 0; i < count; i++) {
        printfNexys("%08x", digest[i]);
    }
}

int main(void) {
    char cmd[384];
    sha3_mode_t mode = SHA3_MODE_256;

    uartInit();

    STATUS_REG = 0x60000000u;
    printfNexys("OK READY sha3-uart-iface mode=%u\n", (unsigned)sha3_mode_bits(mode));
    printfNexys("OK HELP commands: STATUS | MODE <224|256|384|512> | HASH <text> | PING\n");

    while (1) {
        uint32_t digest[16];
        uint32_t words = 0u;
        uint32_t st;

        if (uart_read_line(cmd, sizeof(cmd)) != 0) {
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

        if (starts_with_ci(line, "MODE")) {
            const char *arg = skip_spaces(line + 4);
            sha3_mode_t new_mode;
            if (*arg == '\0' || parse_mode_value(arg, &new_mode) != 0) {
                printfNexys("ERR MODE expected one of 224/256/384/512\n");
                continue;
            }
            mode = new_mode;
            sha3_set_mode(mode);
            STATUS_REG = 0x61000000u | (sha3_mode_bits(mode) & 0xFFFFu);
            printfNexys("OK MODE %u\n", (unsigned)sha3_mode_bits(mode));
            continue;
        }

        if (starts_with_ci(line, "HASH")) {
            const char *msg = skip_spaces(line + 4);
            size_t len = strlen(msg);

            if (sha3_hash_message(mode, (const uint8_t *)msg, len, digest, &words) != 0) {
                STATUS_REG = 0xE1000000u | (SHA3_STATUS & 0xFFFFu);
                printfNexys("ERR HASH hw_status=0x%x\n", SHA3_STATUS);
                continue;
            }

            STATUS_REG = 0x62000000u | (words & 0xFFu);
            printfNexys("OK HASH ");
            print_digest(digest, words);
            printfNexys("\n");
            continue;
        }

        printfNexys("ERR UNKNOWN command\n");
    }

    return 0;
}
