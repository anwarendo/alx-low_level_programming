#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - computes a newly allocated space
 * @str: the string for which memory is to be allocated
 * Return: pointer to the newly allocated space which contains copy of z string
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int size;
	unsigned int i;

	if (str == NULL)
	{
		ptr = NULL;
		return (ptr);
	}

	size = strlen(str) * sizeof(char);
	ptr = (char*)malloc(size);
	if (ptr)
	{
		for (i = 0; i < size; i++)
			ptr[i] = str[i];
		return (ptr);
	}
	else
	{
		ptr = NULL;
		return (ptr);
	}
}
