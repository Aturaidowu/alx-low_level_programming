#include "main.h"

/**
 * free_grid - free memory previously allocated
 *
 * @grid: poiinter to the array
 *
 * @height: number of rows
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
