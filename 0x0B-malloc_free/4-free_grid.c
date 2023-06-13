#include "main.h"

/**
 * free_grid - frees a 2d grid
 * @grid: 2d grid
 * @height: grid height
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
