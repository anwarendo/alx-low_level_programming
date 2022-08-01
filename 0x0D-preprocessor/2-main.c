#include <stdio.h>
#ifndef NAME
#define NAME(X) X
#endif

/**
 * main - the main function
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", NAME(argv[0]));
	return (0);
}
