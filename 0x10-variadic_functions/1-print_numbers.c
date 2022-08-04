#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @n: number of the variable arguments (numbers)
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		if (separator == NULL || i == n - 1)
			printf("%d", num);
		else
			printf("%d%s", num, separator);
	}
	va_end(ap);
	printf("\n");
}
