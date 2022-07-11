#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: the pointer argument for the string
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int i;
	int half;

	len = strlen(str);
	half = len / 2;
	if (len % 2 != 0)
		half = (len - 1) / 2;
	for (i = half + 1; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
