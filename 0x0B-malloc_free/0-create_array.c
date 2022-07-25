#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars, n initializes it with a specific char
 * @size: the size of memory in bytes
 * @c: the char to initialize the memory with
 * Return: pointer for the allocated array or NULL if size = 0 or if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
	{
		ptr = NULL;
		return (ptr);
	}
	ptr = malloc(size);
	if (ptr)
	{
		ptr[0] = c;
		return (ptr);
	}
	else
	{
		ptr = NULL;
		return (ptr);
	}
}
