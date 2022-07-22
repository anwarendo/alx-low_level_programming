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
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
	{
		y--;
		return (_pow_recursion(x, y) * x);
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
		if (!isdigit(argv[1][i]))
		{
			printf("Error");
			return (1);
		}
		i++;
		xs++;
	}

	for (i = xs - 1; i >= 0; i--)
		x += (toascii(argv[1][i]) - 48) * _pow_recursion(10, xs - 1 - i);

	i = 0;
	ys = 0;
	y = 0;
	while (argv[2][i] != '\0')
        {
         	if (!isdigit(argv[2][i]))
                {
                        printf("Error\n");
                        return (1);
		}
                i++;
		ys++;
	}

        for (i = 0; i < ys; i++)
		y += toascii(argv[2][i] - 48) * _pow_recursion(10, ys - 1 - i);

	printf("%d\n", x * y);
	return (0);
}
