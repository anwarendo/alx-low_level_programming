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
	int size;
	int col;
	bool begin;

	size = strlen(str) + 1;
	if (str == NULL)
		return (NULL);
	rows = 0;
	for (i = 0; i < size; i++)
	{
		begin = false;
		col = 0;
		if (str[i] != ' ')
			begin = true;
		if (begin)
		{
			col++;
			if (str[i] == ' ')
				begin = false;
		}
	astr = malloc(3 * sizeof(str));
	astr[0] = str;
	return astr;
}
