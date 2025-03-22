#include "init.h"


void initEditor() {
    if(getWindowSize(&E.screenrows,&E.screencols) == -1) die("getWindowSize");
}