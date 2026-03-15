/*
 * main.c - UART command interface and SHA3 peripheral driver for RVfpga
 *
 *      Authors: Copilot and Truong Le
 *
 * How this program works:
 * 1) Initializes UART and exposes a line-oriented command protocol.
 * 2) Parses host commands (PING, STATUS, MODE, HASH, STREAM, DATASTR, END,
 *    ABORT, LIMITS) and maps them to SHA3 MMIO register operations.
 * 3) Supports one-shot hashing (HASH <text>) and incremental streaming mode
 *    (STREAM + DATASTR chunks or STREAM ... BINARY + END).
 * 4) Finalizes hash computation, reads digest words from output FIFO, and
 *    emits responses in "OK ..." / "ERR ..." format for host tools.
 *
 * Configuration and tunable options:
 * - SHA3_BASE_ADDR / UART_BASE_ADDR: peripheral memory map addresses.
 * - UART_CMD_MAX_LEN: maximum accepted command line size.
 * - DATASTR_FIXED_CHARS: command framing overhead for DATASTR budgeting.
 * - SHA3_WAIT_BASE_CYCLES / SHA3_WAIT_PER_BYTE_CYCLES: timeout model used
 *   when waiting for hardware completion.
 * - SHA3 mode selection: MODE 224/256/384/512 (default 256 at startup).
 *
 * Command behavior summary:
 * - PING: liveness check.
 * - STATUS: read status bits and current mode.
 * - MODE <bits>: set SHA3 mode.
 * - HASH <text>: one-shot hash over provided text payload.
 * - STREAM <len> [BINARY]: begin streamed payload transaction.
 * - DATASTR <len>:<chunk>: append line-mode streamed bytes.
 * - END: finalize active stream and return digest.
 * - ABORT: reset SHA3 and clear streaming state.
 * - LIMITS: report UART command/data chunk limits.
 *
 * Note: This code was generated using Copilot using prompting.
 *
 */

// Libraries
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

// Register Access macro
#define MMIO32(addr)           (*(volatile uint32_t *)(addr))

// --- SHA3 Peripheral register offsets and bit definitions ---
#define SHA3_CONTROL           MMIO32(SHA3_BASE_ADDR + 0x00u)
#define SHA3_STATUS            MMIO32(SHA3_BASE_ADDR + 0x04u)
#define SHA3_IN_FIFO_DATA      MMIO32(SHA3_BASE_ADDR + 0x08u)
#define SHA3_OUT_FIFO_DATA     MMIO32(SHA3_BASE_ADDR + 0x10u)
#define SHA3_MSG_LEN_LO        MMIO32(SHA3_BASE_ADDR + 0x18u)
#define SHA3_MSG_LEN_HI        MMIO32(SHA3_BASE_ADDR + 0x1Cu)

#define SHA3_CTRL_START        (1u << 0)                    // Start bit (begin hashing operation) 
#define SHA3_CTRL_ABORT        (1u << 2)                    // Abort bit (reset hashing operation, also set by ABORT command)
#define SHA3_CTRL_MODE_SHIFT   3u                           // Mode bits start at bit 3
#define SHA3_CTRL_MODE_MASK    (3u << SHA3_CTRL_MODE_SHIFT) // Mode bits mask (2 bits for 4 modes)

#define SHA3_ST_IDLE           (1u << 0)                            // Idle bit
#define SHA3_ST_DONE           (1u << 2)                            // Done bit (set when hash is ready)
#define SHA3_ST_IN_FULL        (1u << 5)                            // Input FIFO full (cannot accept more data)
#define SHA3_ST_ERR_MASK       ((1u << 8) | (1u << 9) | (1u << 10)) // Error bits (generic error, length error, mode error)

/* SHA3 completion wait budget: base + (bytes * slope), saturated at UINT32 max. */
#define SHA3_WAIT_BASE_CYCLES      40000000u
#define SHA3_WAIT_PER_BYTE_CYCLES  20000u

// --- UART register offsets and bit definitions ---
#define UART_RX_DATA           MMIO32(UART_BASE_ADDR + 0x00u)
#define UART_LINE_STATUS       MMIO32(UART_BASE_ADDR + 0x14u)

#define UART_LSR_DR            (1u << 0)


// --- Application-specific definitions ---
/* Maximum UART command line (including command verb and message text). */
/* Reduced because large messages are now streamed via STREAM/DATASTR/END */
#define UART_CMD_MAX_LEN       32768u

/* DATASTR line format: "DATASTR <len>:<payload>" */
#define DATASTR_FIXED_CHARS    9u   /* "DATASTR " + ':' */


typedef enum {
    SHA3_MODE_224 = 0,
    SHA3_MODE_256 = 1,
    SHA3_MODE_384 = 2,
    SHA3_MODE_512 = 3
} sha3_mode_t;

// --- Helper functions for SHA3 operations ---

// print_hex_u32: helper function to print a 32-bit word as 8 hex characters. Used for displaying digest words in hex.
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

// sha3_digest_words: helper function to get number of 32-bit words in the digest for a given mode
static uint32_t sha3_digest_words(sha3_mode_t mode) {
    switch (mode) {
        case SHA3_MODE_224: return 7u;
        case SHA3_MODE_256: return 8u;
        case SHA3_MODE_384: return 12u;
        default: return 16u;
    }
}

// sha3_mode_bits: helper function to get the digest size in bits for a given mode (for display purposes)
static uint32_t sha3_mode_bits(sha3_mode_t mode) {
    switch (mode) {
        case SHA3_MODE_224: return 224u;
        case SHA3_MODE_256: return 256u;
        case SHA3_MODE_384: return 384u;
        default: return 512u;
    }
}

// sha3_pack_u32_be: helper function to pack up to 4 bytes into a big-endian 32-bit word for writing to the input FIFO
static uint32_t sha3_pack_u32_be(const uint8_t *p, size_t n) {
    uint32_t w = 0u;
    if (n > 0u) w |= ((uint32_t)p[0]) << 24;
    if (n > 1u) w |= ((uint32_t)p[1]) << 16;
    if (n > 2u) w |= ((uint32_t)p[2]) << 8;
    if (n > 3u) w |= ((uint32_t)p[3]) << 0;
    return w;
}

// --- SHA3 peripheral control functions ---
// These functions abstract the low-level register interactions for controlling the SHA3 peripheral, 
// including resetting, mode setting, message length configuration, data writing, and digest reading.

// sha3_reset: aborts any ongoing operation and waits for the peripheral to become idle.
static void sha3_reset(void) {
    uint32_t mode_bits = SHA3_CONTROL & SHA3_CTRL_MODE_MASK;
    SHA3_CONTROL = mode_bits | SHA3_CTRL_ABORT;
    while ((SHA3_STATUS & SHA3_ST_IDLE) == 0u) {
    }
}

// sha3_set_mode: configures the SHA3 mode (224/256/384/512) by writing to the control register.
static void sha3_set_mode(sha3_mode_t mode) {
    uint32_t ctrl = SHA3_CONTROL & ~SHA3_CTRL_MODE_MASK;
    ctrl |= ((uint32_t)mode << SHA3_CTRL_MODE_SHIFT) & SHA3_CTRL_MODE_MASK;
    SHA3_CONTROL = ctrl;
}

// sha3_set_msglen: sets the expected message length in bytes by writing to the MSG_LEN_LO and MSG_LEN_HI registers.
static void sha3_set_msglen(uint64_t len_bytes) {
    SHA3_MSG_LEN_LO = (uint32_t)(len_bytes & 0xFFFFFFFFull);
    SHA3_MSG_LEN_HI = (uint32_t)(len_bytes >> 32);
}

// sha3_write_word: writes a single 32-bit word to the input FIFO, waiting if the FIFO is full.
static void sha3_write_word(uint32_t w) {
    while (SHA3_STATUS & SHA3_ST_IN_FULL) {
    }
    SHA3_IN_FIFO_DATA = w;
}

// sha3_write_bytes: helper function to write an arbitrary byte array to the input FIFO using 32-bit big-endian packing. Handles partial words at the end.
// Utilizes sha3_pack_u32_be to pack up to 4 bytes into a word, and calls sha3_write_word for each packed word. Waits for FIFO space as needed.
static void sha3_write_bytes(const uint8_t *data, size_t len) {
    size_t i;
    for (i = 0; i < len; i += 4u) {
        size_t rem = len - i;
        size_t n = (rem >= 4u) ? 4u : rem;
        sha3_write_word(sha3_pack_u32_be(&data[i], n));
    }
}

// sha3_start: sets the START bit in the control register to begin the hashing operation. Preserves mode bits.
static void sha3_start(void) {
    uint32_t mode_bits = SHA3_CONTROL & SHA3_CTRL_MODE_MASK;
    SHA3_CONTROL = mode_bits | SHA3_CTRL_START;
}

// sha3_wait_done: waits for the hashing operation to complete by polling the status register. Returns 0 on success, -1 on error, and -2 on timeout.
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

// sha3_timeout_cycles_for_len: helper function to compute a timeout budget in cycles based on the message length, 
// using a linear model with saturation at UINT32 max. This is used to avoid infinite waits on the hardware.
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

// sha3_read_digest: reads the computed digest from the output FIFO into the provided output array. 
// The count parameter specifies how many 32-bit words to read, based on the mode.
static void sha3_read_digest(uint32_t *out_words, uint32_t count) {
    uint32_t i;
    for (i = 0; i < count; i++) {
        out_words[i] = SHA3_OUT_FIFO_DATA;
    }
}

// --- UART command handling and streaming state management ---

/* Streaming state for incremental input */
static int stream_active = 0;
static uint64_t stream_expected_len = 0ull;
static uint64_t stream_received = 0ull;
static uint8_t stream_partial[4];
static size_t stream_partial_len = 0u;
static int stream_binary_mode = 0;  /* 1 if waiting for raw binary data, 0 if expecting DATASTR commands */

// stream_reset_state: helper function to reset all streaming state variables to their initial values. Called on ABORT and after completing a stream.
static void stream_reset_state(void) {
    stream_active = 0;
    stream_expected_len = 0ull;
    stream_received = 0ull;
    stream_partial_len = 0u;
    stream_binary_mode = 0;
}

// sha3_stream_write_bytes: helper function to write a byte array to the SHA3 input FIFO during streaming. Handles partial words and updates streaming state.
static void sha3_stream_write_bytes(const uint8_t *data, size_t len) {
    size_t i = 0u;

    // Partial word handling: if prev bytes left from last call, fill remaining space
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

    // Full word writes: write directly from input buffer
    for (; i + 4u <= len; i += 4u) {
        sha3_write_word(sha3_pack_u32_be(&data[i], 4));
        stream_received += 4ull;
    }

    // Remaining bytes: store in partial buffer for next call
    while (i < len) {
        stream_partial[stream_partial_len++] = data[i++];
        stream_received++;
    }
}

// sha3_stream_finalize_and_reply: helper function to finalize the streaming input, wait for the hash to be ready, 
// and print the digest result. Handles any remaining partial word and checks for errors/timeouts.
static void sha3_stream_finalize_and_reply(sha3_mode_t mode, size_t timeout_len) {
    // Write any remaining partial word
    if (stream_partial_len > 0u) {
        sha3_write_word(sha3_pack_u32_be(stream_partial, stream_partial_len));
        stream_partial_len = 0u;
    }

    // Wait for hash to be computed, with a timeout based on the total message length.
    if (sha3_wait_done(sha3_timeout_cycles_for_len(timeout_len)) != 0) {
        printfNexys("ERR HASH hw_status=0x%x\n", SHA3_STATUS);
        return;
    }

    // Read digest and print result
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

// sha3_hash_message: helper function to perform a complete hash operation for a given message in one shot.
static int sha3_hash_message(sha3_mode_t mode,
                             const uint8_t *msg,
                             size_t msg_len,
                             uint32_t *digest_words,
                             uint32_t *word_count) {
    // Determine the number of digest words based on the mode
    uint32_t words = sha3_digest_words(mode);

    // Initialize the SHA3 peripheral for the new hash operation
    sha3_reset();
    sha3_set_mode(mode);
    sha3_set_msglen((uint64_t)msg_len);
    sha3_start();

    // Begin writing message bytes to input FIFO
    sha3_write_bytes(msg, msg_len);

    // Wait for the hash to be computed, with a timeout based on the message length. 
    if (sha3_wait_done(sha3_timeout_cycles_for_len(msg_len)) != 0) {
        return -1;
    }

    // Read the computed digest from the output FIFO into the provided output array.
    sha3_read_digest(digest_words, words);
    *word_count = words;
    return 0;
}

// --- UART input handling and main command loop ---

// str_ieq: case-insensitive string comparison helper function. Returns 1 if equal, 0 if not.
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

// starts_with_ci: case-insensitive prefix check helper function. Returns 1 if 's' starts with 'prefix', 0 otherwise.
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

// skip_spaces: helper function to advance a string pointer past any leading spaces or tabs. Returns pointer to first non-space character.
static const char *skip_spaces(const char *s) {
    while (*s == ' ' || *s == '\t') {
        s++;
    }
    return s;
}

// parse_mode_value: helper function to parse a mode value from a string (e.g. "224", "256", "384", "512") 
// and set the corresponding sha3_mode_t output. Returns 0 on success, -1 on failure.
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

// decimal_digits_u64: helper function to compute the number of decimal digits in a uint64_t value. 
// Used for calculating payload length limits.
static size_t decimal_digits_u64(uint64_t value) {
    size_t digits = 1u;
    while (value >= 10ull) {
        value /= 10ull;
        digits++;
    }
    return digits;
}

// uart_max_datastr_payload_len: helper function to compute the maximum payload length for a DATASTR command,
// given the fixed command format and the overall UART command line length limit. 
static size_t uart_max_datastr_payload_len(void) {
    // Compute the maximum payload length that can fit in a UART command line
    const size_t max_line_chars = UART_CMD_MAX_LEN - 1u;
    const size_t fixed_chars = DATASTR_FIXED_CHARS;
    size_t payload_max = (max_line_chars > fixed_chars) ? (max_line_chars - fixed_chars) : 0u;

    // Iterate down from the initial payload_max to find the largest value that fits 
    // within the line length when accounting for the decimal digits in the length field
    while (payload_max > 0u) {
        size_t digits = decimal_digits_u64((uint64_t)payload_max);
        if ((fixed_chars + digits + payload_max) <= max_line_chars) {
            return payload_max;
        }
        payload_max--;
    }

    return 0u;
}

// uart_read_line: reads a line of text from UART into the provided buffer, up to max_len. 
// Handles backspace and ignores carriage returns. Returns 0 on success, 1 if the line was truncated.
static int uart_read_line(char *out, size_t max_len) {
    size_t n = 0u;
    int truncated = 0;

    while (1) {
        // Wait for data to be available in the UART RX FIFO by polling the line status register.
        while ((UART_LINE_STATUS & UART_LSR_DR) == 0u) {
        }
        
        // Read a character from the UART RX data register. Mask to 8 bits and cast to char.
        char c = (char)(UART_RX_DATA & 0xFFu);

        // Handle special characters
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

        // For regular characters, append to the output buffer if there is space. If we exceed max_len, set truncated flag.
        if (n + 1u < max_len) {
            out[n++] = c;
        } else {
            truncated = 1;
        }
    }
}

// uart_read_binary: reads a specified number of bytes from UART into the provided output buffer.
static int uart_read_binary(uint8_t *out, size_t len) {
    size_t n = 0u;
    // While length is not yet reached, wait for data and read bytes directly into the output buffer. This is used in STREAM BINARY mode.
    while (n < len) {
        while ((UART_LINE_STATUS & UART_LSR_DR) == 0u) {
        }
        out[n++] = (uint8_t)(UART_RX_DATA & 0xFFu);
    }
    return 0;
}

// print_digest: helper function to print the computed digest words as a continuous hex string. Used for displaying hash results.
static void print_digest(const uint32_t *digest, uint32_t count) {
    uint32_t i;
    for (i = 0; i < count; i++) {
        print_hex_u32(digest[i]);
    }
}

// --- Main function and command loop ---

int main(void) {
    static char cmd[UART_CMD_MAX_LEN];      // Buffer for reading UART command lines
    sha3_mode_t mode = SHA3_MODE_256;       // Current SHA3 mode (default to 256)
    const size_t max_datastr_chunk = uart_max_datastr_payload_len();    // Compute maximum DATASTR payload length based on UART command line limits prior to sending

    // Initialize UART and print welcome message with available commands and current mode. 
    uartInit();
    printfNexys("OK READY sha3-uart-iface mode=%u\n", (unsigned)sha3_mode_bits(mode));
    printfNexys("OK HELP commands: STATUS | ABORT | LIMITS | MODE <224|256|384|512> | HASH <text> | STREAM <len> | DATASTR <len>:<text-chunk> | END | PING\n");

    // --- Main command loop ---
    while (1) {
        uint32_t digest[16];    // Buffer for digest output (max 512-bit digest is 16 words)
        uint32_t words = 0u;    // Number of digest words for the current mode
        uint32_t st;            // Variable for reading SHA3 status

        // Read line from UART into cmd buffer. If the line is too long, print an error and continue to the next iteration.
        int line_rc = uart_read_line(cmd, sizeof(cmd));
        if (line_rc != 0) {
            printfNexys("ERR LINE_TOO_LONG max=%u\n", (unsigned)(UART_CMD_MAX_LEN - 1u));
            continue;
        }

        // Process the command line by skipping leading spaces and checking for known commands.
        const char *line = skip_spaces(cmd);
        if (*line == '\0') {
            continue;
        }

        // Command: PING - simple liveness check. Respond with "OK PONG".
        if (str_ieq(line, "PING")) {
            printfNexys("OK PONG\n");
            continue;
        }

        // Command: STATUS - query the current status of the SHA3 peripheral and print relevant bits and mode information.
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

        // Command: ABORT - reset the SHA3 peripheral and clear any ongoing streaming state. Respond with "OK ABORT".
        if (str_ieq(line, "ABORT")) {
            sha3_reset();
            stream_reset_state();
            printfNexys("OK ABORT\n");
            continue;
        }

        // Command: LIMITS - report the maximum lengths for UART commands and DATASTR payloads based on the defined limits and calculations.
        if (str_ieq(line, "LIMITS")) {
            printfNexys("OK LIMITS uart_cmd_max=%u datastr_payload_max=%u\n",
                        (unsigned)UART_CMD_MAX_LEN,
                        (unsigned)max_datastr_chunk);
            continue;
        }

        // Command: MODE <bits> - set the SHA3 mode to one of 224, 256, 384, or 512. Respond with the new mode on success or an error message on failure.
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

        // Command: STREAM <len> [BINARY] - begin a new streaming input of the specified length in bytes. 
        if (starts_with_ci(line, "STREAM")) {
            const char *arg = skip_spaces(line + 6);    // Skip "STREAM" and any following spaces to get to the length argument
            if (*arg == '\0') {
                printfNexys("ERR STREAM expected length\n");
                continue;
            }
            // Check if a stream is already active. If so, print an error and ignore the command.
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

            // Check if BINARY mode is requested
            const char *mode_arg = skip_spaces(endptr);
            int use_binary = 0;
            if (starts_with_ci(mode_arg, "BINARY")) {
                use_binary = 1;
            }

            // Initialize streaming state
            stream_active = 1;
            stream_binary_mode = use_binary;
            stream_expected_len = (uint64_t)len;
            stream_received = 0ull;
            stream_partial_len = 0u;

            // Prepare SHA3 engine and start streaming immediately
            sha3_reset();
            sha3_set_mode(mode);
            sha3_set_msglen(stream_expected_len);
            sha3_start();

            // Binary mode: read raw bytes directly from UART until the expected length is received
            if (use_binary) {
                // Send acknowledgment before reading binary data
                printfNexys("OK STREAM BINARY ready=%lu\n", (unsigned long)stream_expected_len);
                
                // In binary mode, read raw data directly without waiting for DATASTR commands
                uint8_t binary_buffer[256];
                while (stream_received < stream_expected_len) {
                    uint64_t remaining = stream_expected_len - stream_received;
                    size_t to_read = (remaining > (uint64_t)sizeof(binary_buffer)) ? sizeof(binary_buffer) : (size_t)remaining;
                    
                    uart_read_binary(binary_buffer, to_read);
                    sha3_stream_write_bytes(binary_buffer, to_read);
                }
                
                // Binary data reception complete; stream_active stays 1 so END can finalize
                stream_binary_mode = 0;
            // Line mode: wait for DATASTR commands to provide the streamed data chunks
            } else {
                printfNexys("OK STREAM START len=%lu\n", (unsigned long)stream_expected_len);
            }
            continue;
        }

        // Command: DATASTR <len>:<text> - provide a chunk of the message to be hashed for the active stream. 
        // The length must match the declared length, and the total received data must not exceed the expected length. 
        // Respond with "OK DATASTR" on success or an error message on failure.
        if (starts_with_ci(line, "DATASTR")) {
            const char *arg = line + 7;     // Skip "DATASTR" to get to the length and payload
            const char *data_ptr;
            size_t bi;

            // Check if a stream is active. If not, print an error and ignore the command.
            if (!stream_active) {
                printfNexys("ERR DATASTR no active stream\n");
                continue;
            }

            // Format: DATASTR <len>:<raw-text>
            arg = skip_spaces(arg);
            if (*arg == '\0') {
                printfNexys("ERR DATASTR no bytes parsed\n");
                continue;
            }

            // Parse the declared length and verify the format. The length must be followed by a colon and then the text chunk.
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
                // Validate the chunk length against the maximum allowed for DATASTR and the remaining expected length.
                if (bi == 0u) {
                    printfNexys("ERR DATASTR no bytes parsed\n");
                    continue;
                }

                // Check that the chunk size does not exceed the maximum allowed for a single DATASTR command.
                if (bi > max_datastr_chunk) {
                    printfNexys("ERR DATASTR chunk too large size=%lu max=%u\n",
                                (unsigned long)bi,
                                (unsigned)max_datastr_chunk);
                    sha3_reset();
                    stream_reset_state();
                    continue;
                }

                // Check that adding this chunk does not exceed the total expected length for the stream.
                if ((stream_received + (uint64_t)bi) > stream_expected_len) {
                    printfNexys("ERR DATASTR too much data recv=%lu expected=%lu\n",
                                (unsigned long)(stream_received + (uint64_t)bi),
                                (unsigned long)stream_expected_len);
                    sha3_reset();
                    stream_reset_state();
                    continue;
                }
                
                // If all checks pass, write the chunk to the SHA3 input FIFO and update the streaming state.
                sha3_stream_write_bytes((const uint8_t *)data_ptr, bi);
            }

            // Send ACK for flow control (not validation - that happens at END)
            printfNexys("OK DATASTR\n");
            continue;
        }

        // Command: END - finalize the active stream, check that the received length matches the expected length, and print the computed hash digest.
        // Used in both streaming modes (DATASTR and BINARY). Respond with "OK HASH" and the digest on success or an error message on failure.
        if (starts_with_ci(line, "END")) {
            // Check if a stream is active. If not, print an error and ignore the command.
            if (!stream_active) {
                printfNexys("ERR END no active stream\n");
                continue;
            }

            // Check that the total received length matches the expected length. 
            // If not, print an error and reset the SHA3 peripheral and streaming state.
            if (stream_received != stream_expected_len) {
                printfNexys("ERR END length mismatch recv=%lu expected=%lu\n",
                            (unsigned long)stream_received,
                            (unsigned long)stream_expected_len);
                sha3_reset();
                stream_reset_state();
                continue;
            }

            // Finalize the hash computation, wait for completion, and print the digest result. 
            // Then reset streaming state for the next operation.
            sha3_stream_finalize_and_reply(mode, (size_t)stream_received);
            stream_reset_state();
            continue;
        }

        // Command: HASH <text> - perform a one-shot hash of the provided text message and print the digest.
        if (starts_with_ci(line, "HASH")) {
            const char *msg = line + 4;     // Skip "HASH" to get to the message text
            if (*msg == ' ') {              // If there is a space after "HASH", consume it and treat the rest as the message. 
                /* 
                 * Consume one separator after command verb.
                 * Preserve remaining bytes exactly as message payload.
                 */
                msg++;
            }
            size_t len = strlen(msg);

            // Hash the message using the sha3_hash_message helper function
            if (sha3_hash_message(mode, (const uint8_t *)msg, len, digest, &words) != 0) {
                printfNexys("ERR HASH hw_status=0x%x\n", SHA3_STATUS);
                continue;
            }

            // Return the computed hash digest as a hex string prefixed with "OK HASH "
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
