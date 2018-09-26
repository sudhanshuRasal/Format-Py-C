#ifndef _STDIO_H
int printf(const char *, ...);
#endif

#ifndef __FORMAT_H
#define __FORMAT_H
#endif

enum FG = {ANSI_DEFAULT=0, FG_BLACK = 30, FG_RED, FG_GREEN, FG_YELLOW, FG_BLUE, FG_MAGENTA, FG_CYAN, FG_WHITE};

// BRIGHT COLORS
enum FG_BRIGHT = {FG_BRIGHT_BLACK=90, FG_BRIGHT_RED, FG_BRIGHT_GREEN, FG_BRIGHT_YELLOW, FG_BRIGHT_BLUE, FG_BRIGHT_MAGENTA, FG_BRIGHT_CYAN, FG_BRIGHT_WHITE};

// BG COLORS
enum BG = {BG_BLACK = 40, BG_RED, BG_GREEN, BG_YELLOW, BG_BLUE, BG_MAGENTA, BG_CYAN, BG_WHITE};

// BRIGHT
enum BG_BRIGHT = {BG_BRIGHT_BLACK=100, BG_BRIGHT_RED, BG_BRIGHT_GREEN, BG_BRIGHT_YELLOW, BG_BRIGHT_BLUE, BG_BRIGHT_MAGENTA, BG_BRIGHT_CYAN, BG_BRIGHT_WHITE};


// TEXT FORMATTING
enum FORMAT = {BOLD=1, FAINT, ITALIC, UNDERLINE, SLOW_BLINK, FAST_BLINK, REVERSE_FB, CONCEAL, STRIKETHROUGH};

// DISABLE TEXT FORMATTING
enum FORMAT_OFF = {BOLD_OFF=21, FAINT_OFF, ITALIC_OFF, UNDERLINE_OFF, SLOW_BLINK_OFF, FAST_BLINK_OFF, REVERSE_FB_OFF, CONCEAL_OFF, STRIKETHROUGH};

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
