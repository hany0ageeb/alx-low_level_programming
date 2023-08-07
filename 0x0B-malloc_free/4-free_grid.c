#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: allocated grid
 * @height: grid height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int h;

	if (grid != NULL)
	{
		h = 0;
		while (h < height)
		{
			free(grid[h]);
			h++;
		}
		free(grid);
	}
}

