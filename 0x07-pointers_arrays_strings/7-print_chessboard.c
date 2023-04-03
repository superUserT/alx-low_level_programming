#include<stdio.h>

/**
 * _chessboard - a function that prints out a chessboard
 * @a: a row in the array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8]) 
{
    int i, j;

    for (i = 0; i < 8; i++) 
    {
        for (j = 0; j < 8; j++) 
	{
            if (j == 7)
	    {
		    _putchar(a[i][j]);
		    putchar('\n');
	    }
	    else
		   _putchar(a[i][j]); 
        }
    }
}
