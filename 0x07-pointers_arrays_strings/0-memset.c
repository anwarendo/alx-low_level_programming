#include "main.h"
#include "string.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer for the beginning of the memory area
 * @b: the byte to be filled with
 * @n: number of times the byte will be filled
 * Return: pointer for the beginning of the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
