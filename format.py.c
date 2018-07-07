#include <python3.5m/Python.h>

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




static PyObject* setformat(PyObject* self, PyObject* args) {
  char*ec;
  if(!PyArg_ParseTuple(args, "s", &ec)) return NULL;
  printf("%s", ec);
  return Py_None;
}

static PyObject* set_fg(PyObject* self, PyObject* args) {
  char *es;
  if(!PyArg_ParseTuple(args, "s", &es)) return NULL;
  printf("%s", es);
  return Py_None;
}
static PyObject* set_bg(PyObject* self, PyObject* args) {
  char *es;
  if(!PyArg_ParseTuple(args, "s", &es)) return NULL;
  printf("%s", es);
  return Py_None;
}

static PyObject* reset(PyObject* self, PyObject* args) {
  printf("%s", ANSI_DEFAULT);
  return Py_None;
}


void setf(const char * ec) {
  printf("%s", ec);
}

static PyObject* bold_on(PyObject * self, PyObject* args) {
  setf(BOLD);
  return Py_None;
}
static PyObject* bold_off(PyObject * self, PyObject* args) {
  setf(BOLD_OFF);
  return Py_None;
}

static PyObject* italic_on(PyObject * self, PyObject* args) {
  setf(ITALIC);
  return Py_None;
}
static PyObject* italic_off(PyObject * self, PyObject* args) {
  setf(ITALIC_OFF);
  return Py_None;
}
static PyObject* underline_on(PyObject * self, PyObject* args) {
  setf(UNDERLINE);
  return Py_None;
}
static PyObject* underline_off(PyObject * self, PyObject* args) {
  setf(UNDERLINE_OFF);
  return Py_None;
}

static PyObject* strikethrough_on(PyObject * self, PyObject* args) {
  setf(STRIKETHROUGH);
  return Py_None;
}
static PyObject* strikethrough_off(PyObject * self, PyObject* args) {
  setf(STRIKETHROUGH_OFF);
  return Py_None;
}


// TODO: Edit the names
static PyMethodDef allmethods[] = {
  //{"helloworld", helloworld, METH_NOARGS, "Prints Hello World"},
  //{"methodname", methodname, NO_OF_ARGS_, "DOCSTRING"}
  {"setformat", setformat, 1, "Sets format escape sequence."},
  {"reset", reset, METH_NOARGS, "Resets console defaults."},
  {"bold_on", bold_on , METH_NOARGS, "Sets console text mode to duh!"},
  {"bold_off", bold_off , METH_NOARGS, "Sets console text mode to duh!"},
  {"italic_on", italic_on , METH_NOARGS, "Sets console text mode to duh!"},
  {"italic_off", italic_off , METH_NOARGS, "Sets console text mode to duh!"},
  {"underline_on", underline_on , METH_NOARGS, "Sets console text mode to duh!"},
  {"underline_off", underline_off , METH_NOARGS, "Sets console text mode to duh!"},
  {"strikethrough_on", strikethrough_on , METH_NOARGS, "Sets console text mode to duh!"},
  {"strikethrough_off", strikethrough_off , METH_NOARGS, "Sets console text mode to duh!"},
  {"set_bg", set_bg, 1, "Sets background color."},
  {"set_fg", set_fg, 1, "Sets foreground color."}

};


static struct PyModuleDef output_formatter = {
  PyModuleDef_HEAD_INIT,
  "format",
  "Python output format library",
  -1,
  allmethods
};


PyMODINIT_FUNC PyInit_format(void) {
  PyObject* module = PyModule_Create(&output_formatter);

  // Some color constants constants
  PyModule_AddStringConstant(module, "fg_BLACK", "\x1b[30m");
  PyModule_AddStringConstant(module, "fg_RED", "\x1b[31m");
  PyModule_AddStringConstant(module, "fg_GREEN", "\x1b[32m");
  PyModule_AddStringConstant(module, "fg_YELLOW", "\x1b[33m");
  PyModule_AddStringConstant(module, "fg_BLUE", "\x1b[34m");
  PyModule_AddStringConstant(module, "fg_MAGENTA", "\x1b[35m");
  PyModule_AddStringConstant(module, "fg_CYAN", "\x1b[36m");
  PyModule_AddStringConstant(module, "fg_WHITE", "\x1b[37m");

  // BRIGHT COLORS
  PyModule_AddStringConstant(module, "fg_BRIGHT_BLACK", "\x1b[90m");
  PyModule_AddStringConstant(module, "fg_BRIGHT_RED", "\x1b[91m");
  PyModule_AddStringConstant(module, "fg_BRIGHT_GREEN", "\x1b[92m");
  PyModule_AddStringConstant(module, "fg_BRIGHT_YELLOW", "\x1b[93m");
  PyModule_AddStringConstant(module, "fg_BRIGHT_BLUE", "\x1b[94m");
  PyModule_AddStringConstant(module, "fg_BRIGHT_MAGENTA", "\x1b[95m");
  PyModule_AddStringConstant(module, "fg_BRIGHT_CYAN", "\x1b[96m");
  PyModule_AddStringConstant(module, "fg_BRIGHT_WHITE", "\x1b[97m");

  PyModule_AddStringConstant(module, "bg_BLACK", "\x1b[40m");
  PyModule_AddStringConstant(module, "bg_RED", "\x1b[41m");
  PyModule_AddStringConstant(module, "bg_GREEN", "\x1b[42m");
  PyModule_AddStringConstant(module, "bg_YELLOW", "\x1b[43m");
  PyModule_AddStringConstant(module, "bg_BLUE", "\x1b[44m");
  PyModule_AddStringConstant(module, "bg_MAGENTA", "\x1b[45m");
  PyModule_AddStringConstant(module, "bg_CYAN", "\x1b[46m");
  PyModule_AddStringConstant(module, "bg_WHITE", "\x1b[47m");

  // BRIGHT
  PyModule_AddStringConstant(module, "bg_BRIGHT_BLACK", "\x1b[100m");
  PyModule_AddStringConstant(module, "bg_BRIGHT_RED", "\x1b[101m");
  PyModule_AddStringConstant(module, "bg_BRIGHT_GREEN", "\x1b[102m");
  PyModule_AddStringConstant(module, "bg_BRIGHT_YELLOW", "\x1b[103m");
  PyModule_AddStringConstant(module, "bg_BRIGHT_BLUE", "\x1b[104m");
  PyModule_AddStringConstant(module, "bg_BRIGHT_MAGENTA", "\x1b[105m");
  PyModule_AddStringConstant(module, "bg_BRIGHT_CYAN", "\x1b[106m");
  PyModule_AddStringConstant(module, "bg_BRIGHT_WHITE", "\x1b[107m");

  return module;
}
