#include "main.h"


/**
 * _strlen_recursion - computes the length of a string
 * @s: pointer for the string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
	return (0);
}
