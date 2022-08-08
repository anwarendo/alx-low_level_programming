#include "3-calc.h"

/**
 * main - the main function
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	char *s;
	int a;
	int b;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	s = argv[2];
	if (s[1] != '\0')
	{
		printf("Error\n");
		exit(90);
	}
	if (*s != '+' && *s != '-' && s[0] != '*' && s[0] != '/' && s[0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = get_op_func(s)(a, b);
	printf("%d\n", result);
	return (0);
}
