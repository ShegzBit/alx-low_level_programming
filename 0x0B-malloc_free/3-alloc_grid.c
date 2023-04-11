#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - creates 2d array init. to 0s
 * @width : width
 * @height : height
 * Return: pointer to pointer to 2d arr
 */
int **alloc_grid(int width, int height)
{
int **_2d, i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
_2d = (int **)malloc(height * sizeof(*_2d));
if (_2d == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
_2d[i] = (int *)malloc(width * sizeof(int));
if (_2d == NULL)
{
return (NULL);
}
}
for (j = 0; j < height; j++)
{
for (i = 0; i < width; i++)
{
_2d[j][i] = 0;
}
}
return (_2d);
}
