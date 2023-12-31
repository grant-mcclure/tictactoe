#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

GameBoard* initializeBoard() {
    // Allocate and initialize the game board
    GameBoard* board  = (GameBoard *)malloc(sizeof(BOARD_SIZE)); //allocate space for gameboard
    if(board == NULL){
        fprintf(stderr, "memort not allocated properly");
    }

    //loop through array and allocate memory

    board->board = (char **)malloc(BOARD_SIZE * sizeof(char *));

    for (int i = 0; i < BOARD_SIZE; i++)
    {
        board->board[i] = (char *)malloc(sizeof(char));
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            board->board[i][j] = '-';
        }
        
    }
    
    return board;

}

void printBoard(GameBoard *board) {
    // Print the current state of the board

    printf("welcome to TicTacToe!\n");

    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            printf("%c ", board->board[i][j]);
        }
        
    }
    
}

// void placeMarker(GameBoard *board, int row, int col, char marker) {
//     // Place a marker on the board at the specified location
// }

// void freeBoard(GameBoard *board) {
//     // Free the dynamically allocated memory for the board
//     free(board);
// }
