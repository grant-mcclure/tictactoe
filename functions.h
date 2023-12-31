#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define BOARD_SIZE 3


typedef struct{
    char **board;//double pointer to initialise 2D array

}GameBoard;

GameBoard* initializeBoard(); //init board
void printBoard(GameBoard *board);




// void placeMarker(GameBoard *board, int row, int col, char marker);
void freeBoard(GameBoard *board)


#endif 
