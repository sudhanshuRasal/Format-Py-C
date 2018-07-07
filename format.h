#ifndef __FORMAT_H
#define __FORMAT_H
#endif

#ifndef _STDIO_H
int printf(const char *, ...);
#endif

#define ANSI_DEFAULT \
        "\x1b[0m"

#define FG_BLACK   "\x1b[30m"
#define FG_RED     "\x1b[31m"
#define FG_GREEN   "\x1b[32m"
#define FG_YELLOW  "\x1b[33m"
#define FG_BLUE    "\x1b[34m"
#define FG_MAGENTA "\x1b[35m"
#define FG_CYAN    "\x1b[36m"
#define FG_WHITE   "\x1b[37m"

// BRIGHT COLORS
#define FG_BRIGHT_BLACK   "\x1b[90m"
#define FG_BRIGHT_RED     "\x1b[91m"
#define FG_BRIGHT_GREEN   "\x1b[92m"
#define FG_BRIGHT_YELLOW  "\x1b[93m"
#define FG_BRIGHT_BLUE    "\x1b[94m"
#define FG_BRIGHT_MAGENTA "\x1b[95m"
#define FG_BRIGHT_CYAN    "\x1b[96m"
#define FG_BRIGHT_WHITE   "\x1b[97m"

#define BG_BLACK   "\x1b[40m"
#define BG_RED     "\x1b[41m"
#define BG_GREEN   "\x1b[42m"
#define BG_YELLOW  "\x1b[43m"
#define BG_BLUE    "\x1b[44m"
#define BG_MAGENTA "\x1b[45m"
#define BG_CYAN    "\x1b[46m"
#define BG_WHITE   "\x1b[47m"

// BRIGHT
#define BG_BRIGHT_BLACK   "\x1b[100m"
#define BG_BRIGHT_RED     "\x1b[101m"
#define BG_BRIGHT_GREEN   "\x1b[102m"
#define BG_BRIGHT_YELLOW  "\x1b[103m"
#define BG_BRIGHT_BLUE    "\x1b[104m"
#define BG_BRIGHT_MAGENTA "\x1b[105m"
#define BG_BRIGHT_CYAN    "\x1b[106m"
#define BG_BRIGHT_WHITE   "\x1b[107m"

#define BOLD          "\x1b[1m"
#define FAINT         "\x1b[2m"
#define ITALIC        "\x1b[3m"
#define UNDERLINE     "\x1b[4m"
#define SLOW_BLINK    "\x1b[5m"
#define FAST_BLINK    "\x1b[6m"
#define REVERSE_FB    "\x1b[7m"
#define CONCEAL       "\x1b[8m"
#define STRIKETHROUGH "\x1b[9m"

#define BOLD_OFF          "\x1b[21m"
#define FAINT_OFF         "\x1b[22m"
#define ITALIC_OFF        "\x1b[23m"
#define UNDERLINE_OFF     "\x1b[24m"
#define SLOW_BLINK_OFF    "\x1b[25m"
#define FAST_BLINK_OFF    "\x1b[26m"
#define REVERSE_FB_OFF    "\x1b[27m"
#define CONCEAL_OFF       "\x1b[28m"
#define STRIKETHROUGH_OFF "\x1b[29m"

#define SWAP_BG_FG REVERSE_FB
typedef void function;
typedef const char * ESC_CODE;
// Calls printf to set escape sequence
function setf(ESC_CODE CODE);

// Resets the formatting
function reset();

// Sets Font COLOR
function setColor(ESC_CODE CODE);

// Sets BG Color
function setBackground(ESC_CODE CODE);

// Sets Formatting On/Off

function boldOn();

function boldOff();

function italicOn();

function ItalicOff();

function underlineOn();

function underlineOff();

function strikethroughOn();

function strikethroughOff();
