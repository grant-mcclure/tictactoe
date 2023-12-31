#include <stdio.h>
#include <stdlib.h>
#include "functions.h"



int main(int argc, char *argv[]) {
    GameBoard *board = initializeBoard();
    printBoard(board);

    freeBoard(board); // Free dynamically allocated memory
    return 0;
}
