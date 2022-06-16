#ifndef SUDOKU_H
#define SUDOKU_H

#include <stdio.h>
#include <stdlib.h>

extern int UNSOLVED;
extern int SIZE_ROWS;
extern int SIZE_COLUMNS;

typedef struct Box
{
        struct Box * next;
} Box;

typedef struct Square
{
    int number;
    /* [1][1][1][1][1][1][1][1][1]
     * [9][8][7][6][5][4][3][2][1] index*/
	int possible[9];
	int solvable; // Will be subtracted by one, until == 1
    Box * box;
    int row;
    int column;
} Square;


int ** createPuzzle();
void printPuzzle(int ** puzzle);


#endif
