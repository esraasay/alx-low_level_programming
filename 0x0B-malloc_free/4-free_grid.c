#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * free_grid - free 2d array
 * @grid: 2d grid
 * @height: height dimension of the grid
 * Description: frees the memory of the grid
 * Returned value: nothing
 *
 */


void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}

