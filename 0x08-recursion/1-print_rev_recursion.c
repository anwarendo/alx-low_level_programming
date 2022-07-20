#include "main.h"
#include <stdio.h>


/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer for the string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char *a;
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		a = s + sizeof(s) - 2;
		_putchar(*a--);
	}
}
