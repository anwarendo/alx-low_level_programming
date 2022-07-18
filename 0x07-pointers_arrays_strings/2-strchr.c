#include "main.h"
#include <string.h>

/**
 * _strchr - locates character in a string
 * @s: pointer for the string to find the character in
 * @c: the chararcter to search for
 * Return: pointer for the first occurrence of the char in the string
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
