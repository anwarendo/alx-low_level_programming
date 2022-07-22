#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

/**
 * _pow_recursion - computes the value of x raised to the power of y
 * @x: the base number
 * @y: the power number
 * Return: the result of x ** y
 */
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
	{
		y--;
		return (_pow(x, y) * x);
	}
}

/**
 * main - the main function
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int signx = 1;
	int signy = 1;
	int i;
	int x;
	int y;
	int xs;
	int ys;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = 0;
	xs = 0;
	x = 0;
	while (argv[1][i] != '\0')
	{
		if (i == 0 && argv[1][i] == '-')
			signx = -1;
		if (!isdigit(argv[1][i]))
		{
			printf("Error");
			return (1);
		}

		i++;
		xs++;
	}
	if (signx == 1)
		for (i = 0; i < xs; i++)
			x += (toascii(argv[1][i]) - 48) * _pow(10, xs - 1 - i);
	else
	{
		for (i = 1; i < xs; i++)
			x += (toascii(argv[1][i]) - 48) * _pow(10, xs - 1 - i);
		x = signx * x;
	}
	i = 0;
	ys = 0;
	y = 0;
	while (argv[2][i] != '\0')
        {
		if (i == 0 && argv[2][i] == '-')
			signy = -1;
         	if (i > 0 && !isdigit(argv[2][i]))
                {
                        printf("Error\n");
                        return (1);
		}
                i++;
		ys++;
	}

	if (signy == -1)
	{
		for (i = 1; i < ys; i++)
			y += toascii(argv[2][i] - 48) * _pow(10, ys - 1 - i);
		y = signy * y;
	}
	else
		for (i = 0; i < ys; i++)
			y += toascii(argv[2][i] - 48) * _pow(10, ys - 1 - i);

	printf("%d\n", x * y);
	return (0);
}
