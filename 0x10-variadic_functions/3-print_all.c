#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * print_all - prints anything
 * @format: pointer for the format characters string - a char for each arg
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char c, *s;
	int d;
	float f;
	int i;

	i = 0;
	while (i < 4)
	{
		switch(format[i])
		{
		case 'c':
			c = (char) va_arg(ap, int);
			printf("%c", c);
			break;
		case 'i':
			d = va_arg(ap, int);
			printf("%d", d);
			break;
		case 'f':
			f = va_arg(ap, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(ap, char *);
			if (s == NULL)
			{	printf("nil");
				break;
			}
			printf("%s", s);
			break;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
