#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer for the string
 * @accept: pointer for substring
 * Return: # of bytes in the initial segment of s with bytes only from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
