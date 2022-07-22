#include <stdio.h>

/**
 * main - the main function and prints its name
 * @argc: arguments count
 * @argv: array of pointer for arguments or argument vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
