#include <sttdef.h>
/**
 * print_chessboard - draws a 2d array passed to it
 * @a : array passed to function
 */
void print_chessboard(char (*a)[8])
{
int j, i;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
putchar(a[i][j]);
}
putchar('\n');
}
}
