#include "main.h"
#include <string.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer for pointer for string
 * @to: pointer to char that s is going to be set into
 * Return: void
 */
void set_string(char **s, char *to)
{
	char *tmp;
	tmp = &to;
	**s = tmp;
}
