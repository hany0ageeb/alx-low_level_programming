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
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid != NULL)
	{
		for (i = 0; i < width; i++)
		{
			grid[i] = calloc(width, sizeof(int));
			if (grid[i] == NULL)
			{
				while (i >= 0)
				{
					free(grid[i]);
					i--;
				}
				free(grid);
				grid = NULL;
				return (grid);
			}
		}
	}
	return (grid);
}

