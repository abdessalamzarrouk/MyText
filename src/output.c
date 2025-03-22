#include "output.h"
#include "globals.h"

void editorDrawRows(){
    int y;
    for(y=0;y<E.screenrows;y++){
        write(STDOUT_FILENO,"~\r\n",3);
    }
}

void editorRefreshScreen() {
    write(STDOUT_FILENO, "\x1b[2J", 4);
    write(STDOUT_FILENO,"\x1b[H",3);

    editorDrawRows();

    write(STDOUT_FILENO,"\x1b[H",3);
  }