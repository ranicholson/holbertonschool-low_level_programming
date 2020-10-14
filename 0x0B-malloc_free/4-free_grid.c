#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function to free grid previously created
 * @grid: grid to clear
 * @height: height of grid to clear
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
