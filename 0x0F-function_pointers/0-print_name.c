#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer for the name string
 * @f: pointer function that prints a char only
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
