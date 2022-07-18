#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: pointer for destination area
 * @src: pointer for source area
 * @n: number of bytes
 * Return: pointer for destination area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
