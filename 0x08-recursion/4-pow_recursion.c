#include "main.h"

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
