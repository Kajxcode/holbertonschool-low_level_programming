#include <stdio.h>
/**
 * print_chessboard - Prints chessboard
 * @a: 2D array representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
    int i, j;

    for (i = 0; i < 8; i++) /* Loop through rows */
    {
        for (j = 0; j < 8; j++) /* Loop through columns */
        {
            _putchar(a[i][j]); /* Print each chess piece */
        }
        _putchar('\n'); /* Newline after each row */
    }
}
