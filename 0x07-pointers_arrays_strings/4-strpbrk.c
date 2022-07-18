#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer for the string to be searched from
 * @accept: pointer for the byte set to search for
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
