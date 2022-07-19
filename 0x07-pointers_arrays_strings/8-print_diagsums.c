#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of a square matrix of integers
 * @a: pointer as a cast for array of array
 * @size: the size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int **b = &a;
	int i;
	int sum1;
	int sum2;
	
	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
		sum1 += b[0][i + size * i];
	printf("%d, %d\n", sum1, sum2);
}
