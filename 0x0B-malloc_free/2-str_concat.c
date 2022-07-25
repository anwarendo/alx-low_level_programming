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

	if (s1 != NULL)
		size1 = strlen(s1) * sizeof(char);
	else
		size1 = 0;
	if (s2 != NULL)
		size2 = strlen(s2) * sizeof(char) + sizeof(char);
	else
		size2 = 0;
	size = size1 + size2;
	if (size == 0)
	{
		ptr = malloc(sizeof(char));
		ptr[0] = '\0';
		return (ptr);
	}
	ptr = malloc(size);
	if (ptr)
	{
		for (i = 0; i < size1; i++)
			ptr[i] = s1[i];
		for (j = 0; j < size2; j++)
			ptr[i + j] = s2[j];
		return (ptr);
	}
	else
	{
		ptr = NULL;
		return (ptr);
	}
}
