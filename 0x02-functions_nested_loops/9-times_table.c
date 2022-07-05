#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int p;

	for(i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			p = i * j;
			printf("%2d,  ", p);
		}
		_putchar('\n');
	}
}
