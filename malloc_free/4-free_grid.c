#include "main.h"

/**
 * free_grid - Frees a greed
 * @grid: Grid to free
 * @height: Height of the grid
 * return: Void
 */

void free_grid(int **grid, int height)
{
	int n;

	if (grid != NULL)
	{
		for  (n = height ;  n >= 0 ; n--)
		{
			free(grid[n]);
		}
		free(grid);
	}
}
