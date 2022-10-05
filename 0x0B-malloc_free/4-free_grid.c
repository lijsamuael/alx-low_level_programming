#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees
 * @grid: array to free
 * @height: height of the array
 * Return: none
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
