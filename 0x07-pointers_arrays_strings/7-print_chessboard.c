#include "main.h"
#include <string.h>

/**
 * print_chessboard - prints the chessboard
 * @a: pointer for arrays of char
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	int rows;
	int cols;

	rows = sizeof(a);
	cols = sizeof(*a);
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
