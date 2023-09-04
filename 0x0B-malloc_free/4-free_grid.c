#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2d grid previously created by
 * the alloc_grid function
 * @grid: 2-dimensional grid
 * @height: height of grid
 * Return: 0;
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
