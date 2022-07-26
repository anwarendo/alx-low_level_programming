#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimentional greed previously created task 3
 * @grid: pointer to the grid
 * @height: the height of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
