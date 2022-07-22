#include <stdio.h>

/**
 * main - the main function that prints the number of arguments
 * @argc: number of arguments
 * @argv: the argument vector or array of pointers for argument
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	if(sizeof(argv) >= 1)
		printf("%d\n", argc);
	return (0);
}
