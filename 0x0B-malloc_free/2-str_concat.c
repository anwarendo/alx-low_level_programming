#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1;
	unsigned int size2;
	unsigned int size;
	unsigned int i;
	unsigned int j;
	char *ptr;

	size1 = strlen(s1) * sizeof(char);
	size2 = strlen(s2) * sizeof(char) + sizeof(char);
	size = size1 + size2;
	ptr = malloc(size);
	if (ptr)
	{
		i = 0;
		while (i < size1)
		{
			ptr[i] = s1[i];
			i++;
		}

		j = 0;
		while (j < size2)
		{
			ptr[i + j] = s2[j];
			j++;
		}

		return (ptr);
	}
	else
	{
		ptr = NULL;
		return (ptr);
	}
}
