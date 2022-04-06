#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: number of columns
 * @height: number of rolls
 *
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **grid, i;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
		}
			return (NULL);
	}
	return (grid);
}
