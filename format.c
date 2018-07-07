#include "format.h"

function setf(ESC_CODE ec) {
  printf("%s",ec);
  return;
}

function reset() {
  setf(ANSI_DEFAULT);
  return;
}

function setColor(ESC_CODE ec) {
  setf(ec);
}
function setBackground(ESC_CODE ec) {
  setf(ec);
}

function boldOn() {
  setf(BOLD);
}
function boldOff() {
  setf(BOLD_OFF);
}

function italicOn() {
  setf(ITALIC);
}
function ItalicOff() {
  setf(ITALIC_OFF);
}
function underlineOn() {
  setf(UNDERLINE);
}
function underlineOff() {
  setf(UNDERLINE_OFF);
}

function strikethroughOn() {
  setf(STRIKETHROUGH);
}
function strikethroughOff() {
  setf(STRIKETHROUGH_OFF);
}
