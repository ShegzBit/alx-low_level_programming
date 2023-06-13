#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - creates a 2d array
 * @width: width
 * @height: height
 * Return: 2d array
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j = 0, k;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	return (NULL);



	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (k = 0; k <= i; k++)
			{
				free(grid[k]);
			}
			free(grid);
			return (NULL);
		}

		j = 0;
		while (j < width)
		{
			grid[i][j++] = 0;
		}
		i++;
	}
	return (grid);
}
