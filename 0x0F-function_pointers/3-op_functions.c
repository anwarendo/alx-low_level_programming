#include "3-calc.h"

/**
 * op_add - adds to integers
 * @a: the first integer
 * @b: the second integer
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts the second from the first
 * @a: the first number
 * @b: the second number
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: the first number
 * @b: the second number
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides the first number by the second number
 * @a: the first number
 * @b: the second number
 * Return: the result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division a by b
 * @a: the first number
 * @b: the second number
 * Return: the remainder of a / b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
