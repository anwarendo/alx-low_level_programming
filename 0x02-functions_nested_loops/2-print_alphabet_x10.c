#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 1;
	c = 'a';
	while (i <= 10)
	{
		while (c <= 'z')
			_putchar(c++);
		_putchar('\n');
		i++;
	}
}
