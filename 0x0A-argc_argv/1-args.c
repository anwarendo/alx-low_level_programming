#include <stdio.h>

/**
 * main - the main function that prints the number of arguments
 * @argc: number of arguments
 * @argv: the argument vector or array of pointers for argument
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	char **a __attribute__((unused)) = argv;

	printf("%d\n", argc);
	return (0);
}
