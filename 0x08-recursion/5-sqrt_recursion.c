#include "main.h"

/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: the number
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n)
{
	if ((n / 2 * n / 2) > n)
		return (_sqrt_recursion(n / 2));
	else if ((n / 2 * n / 2) < 1)
		return (-1);
	return (n / 2);
}
