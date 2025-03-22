#ifndef INPUT_H
#define INPUT_H
#include "terminal.h"
#include <ctype.h>
#include <unistd.h>
#include <termios.h>
#include <errno.h>

#define CTRL_KEY(k) ((k) & 0x1f)

char editorReadKey();
void editorProcessKeypress();

#endif