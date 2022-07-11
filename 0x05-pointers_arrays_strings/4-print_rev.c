#include "main.h"

/**
 * print_rev - prints the argument string in reverse
 * @s: the argument string
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	int 0;
	while (*s++ != '\0')
		i++;
	i--;
	while (i >= 0)
		_putchar(*s + i--);
	_putchar('\n');
}
