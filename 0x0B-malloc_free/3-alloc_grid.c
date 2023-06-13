#include "main.h" 


int **alloc_grid(int width, int height)
{
    int **grid = malloc(height * sizeof (int)), i = 0, j = 0;
    *grid = malloc(width * sizeof(int));

    if (*grid == NULL || grid == NULL || height == 0 || width == 0)
    return (NULL);

    while (i < height)
    {
        while (j < width)
        {
            grid[i][j] = 0;
            j++;
        }
        i++;
    }
    return (grid);
}