#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: arguments count
 * @av: arguments vector
 */
char *argstostr(int ac, char **av)
{
	unsigned int i;
	unsigned int size;
	char *str;
	char str2[] = "hello there";

	(void) ac;
	(void) av;
	size = 12;
	str = malloc(12);
	for (i = 0; i < size; i++)
		str[i] = str2[i];
	return (str);
}
