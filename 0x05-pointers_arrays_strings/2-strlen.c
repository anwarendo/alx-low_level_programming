#include "main.h"

/**
 * _strlen - computes the length of the string argument
 * @s: pointer to string parameter begunning
 * Return: length of the string / number of characters
 */
int _strlen(char *s)
{
	int cnt;

	cnt = 0;
	while (*s++ != '\0')
		cnt++;
	return cnt;
}
