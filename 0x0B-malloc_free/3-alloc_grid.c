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
	int **rows;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		rows = NULL;
		return (rows);
	}
	cols = malloc(width * sizeof(int));
	if (cols)
	{
		rows = malloc(height * sizeof(cols));
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				cols[j] = 0;
			rows[i] = cols;
		}
		return (rows);
	}
	else
		return (NULL);
}
