#include <stdio.h>
#include "main.h"

/**
 * print_array -  prints n elements of an array of integers
 * @a: the array / pointer to integer argument
 * @n: the number of integers to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;
	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d, ", a[i]);
	}
	printf("%d\n", a[i]);
}
