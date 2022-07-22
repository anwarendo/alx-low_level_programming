#include <stdio.h>
#define UNUSED(argv) do { (void)(argv); } while (0)

/**
 * main - the main function that prints the number of arguments
 * @argc: number of arguments
 * @argv: the argument vector or array of pointers for argument
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc);
	return (0);
}
