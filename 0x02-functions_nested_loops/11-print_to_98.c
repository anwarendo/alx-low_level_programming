#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from n to 98
 * @n: the beginning
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
		printf("%d, ", i);
}
