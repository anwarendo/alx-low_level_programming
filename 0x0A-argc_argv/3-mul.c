#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = x * y;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", z);
	return (0);
}
