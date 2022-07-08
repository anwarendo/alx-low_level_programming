#include "main.h"

/**
 * _isupper - checks for case
 * @c: the character
 * Return: 1 for upper nad 0 for lower
 */
int _isupper(int c)
{
	if (c <= 'A' && c >= 'Z')
		return (0);
	else
		return (1);
	return (0);
}
