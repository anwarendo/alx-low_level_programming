#include "main.h"
#include <stdio.h>

/**
 * print_number - prints any number on the argument
 * @n: the number to be printed
 * Return: void
 */
void print_number(int n)
{
	/* exponet counter */
	int ec;
	int i;
	int n1;

	if (n < 0)
	{
		n = -1 * n;
		_putchar('-');
	}

	if (n > 0 && n < 10)
		_putchar(n + '0');

	else if (n >= 10)
	{
		n1 = n;
		ec = 0;
		while (n1 / 10 > 0)
		{
			n1 = n1 / 10;
			ec++;
		}
		
		for (i = ec; i >= 0; i--)
		{
			_putchar(((n / (10 ^ ec)) % 10) + '0');
		}
	}
	_putchar('\n');
}
