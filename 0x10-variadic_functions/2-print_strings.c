#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: pointer to the separator string
 * @n: number of the variable arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *s;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (separator == NULL)
			if (s == NULL)
				printf("nil");
			else
				printf("%s", s);
		else
		{
			if (s == NULL)
				if (i == n - 1)
					printf("nil");
				else
					printf("nil%s", separator);
			else
				if (i == n - 1)
					printf("%s", s);
				else
					printf("%s%s", s, separator);
		}
	}
	printf("\n");
}
