#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - prepares a pointer to a 2 dimentional array of integers
 * @width: the collumns or the width of the 2d array
 * @height: the rows or the height of the array
 * Return: pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int *cols;
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		grid = NULL;
		return (grid);
	}
	grid  = malloc(height * sizeof(cols));
	for (i = 0; i < height; i++)
		grid[i] = malloc(width * sizeof(int));
	if (!grid)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
