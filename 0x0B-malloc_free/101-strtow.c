#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: pointer to the string
 * Return: pointer to an array of strings(words)
 */
char **strtow(char *str)
{

	char **astr;
/*	int size;
	int col;
	bool begin;
*/
	if (str == NULL)
		return (NULL);

	astr = malloc(3 * sizeof(str));
	astr[0] = str;
	return astr;
}
