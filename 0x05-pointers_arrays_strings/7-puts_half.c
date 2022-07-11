#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: the pointer argument for the string
 * Return: void
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i;
	int half;
	if (len % 2 != 0)
		half = (len - 1) / 2;
	else
		half = len / 2;
	for (i = half; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
