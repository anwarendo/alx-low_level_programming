#include "main.h"

/**
 * _puts - prints string to stdout
 * @str - pointer to the beginning of the string to be printed out
 * Return: void
 */
void _puts(char *str)
{
	_putchar(*str);
	while (*str++ != '\0')
	{
		_putchar(*str);
	}
}
