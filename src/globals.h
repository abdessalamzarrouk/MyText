#ifndef GLOBALS_H
#define GLOBALS_H
#include <termios.h>

struct editorConfig {
    int screenrows;
    int screencols;
    struct termios org_trm;
};

extern struct editorConfig E;

#endif