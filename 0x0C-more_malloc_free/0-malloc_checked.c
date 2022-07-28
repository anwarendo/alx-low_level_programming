#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: bytes size for allocation
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr)
		return (ptr);
	else
		exit(98);
}
