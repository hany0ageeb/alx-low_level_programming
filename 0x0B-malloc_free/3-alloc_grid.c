#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: array width
 * @height: array height
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
		return (grid);
	grid = malloc(sizeof(int *) * height);
	if (grid != NULL)
	{
		for (i = 0; i < height; ++i)
		{
			grid[i] = malloc(sizeof(int) * width);
			if (grid[i] != NULL)
			{
				for (j = 0; j < width; ++j)
				{
					grid[i][j] = 0;
				}
			}
		}
	}
	return (grid);
}

