#ifndef TERMINAL_H
#define TERMINAL_H
#include <ctype.h>
#include <unistd.h>
#include <termios.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/ioctl.h>

#include "globals.h"

extern struct termios org;

void disableRawMode();

void enableRawMode();

void die(const char *s);

int getWindowSize(int *rows, int *cols);

#endif