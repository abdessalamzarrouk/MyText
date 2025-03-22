#include "terminal.h"
#include "input.h"
#include "output.h"
#include "globals.h"
#include "init.h"

struct termios org_trm;

int main() {
    initEditor();
    enableRawMode(org_trm);
    
    while(1){
        editorRefreshScreen();
        editorProcessKeypress();
    }
}