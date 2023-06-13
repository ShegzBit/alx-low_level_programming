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
	int **grid = malloc(height * sizeof(int *));
	int i = 0, j = 0;

	if (grid == NULL || width <= 0 || height <= 0)
	return (NULL);

	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			while (i--)
			{
				free(*grid++);
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
