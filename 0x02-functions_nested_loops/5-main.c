#include "main.h"

/**
 * main - the main func
 * Return: 0 normally
 */
int main(void)
{
	int r;

	r = print_sign(10);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
