#include "main.h"

/**
 * _pow - computes 2 the power of n
 * @n: the power
 * Return: the result
 */
unsigned int _pow(unsigned int n)
{
	if (n <= 0)
		return (1);
	return (2 * _pow(n - 1));
}

/**
 * bit_index - returns the index of the most significant bit
 * @n: the nember for which the index is going to be found
 * Return: the index
 */
unsigned int bit_index(unsigned long int n)
{
	unsigned int m;
	m = 0;
	if (n <= 1)
		return (0);
	while (_pow(m) <= n)
		m++;
	m--;
	return (m);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: the number in base 10
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	/* unsigned long int ref; */
	unsigned long int x;
	int m;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	m = bit_index(n);
	/* ref = (unsigned long int) _pow(m);*/
	/* printf("%lu\n", ref); */
	/* i should change this iteration into recursion to reverse the bits
	   order */
	for (i = 0; i <= m; i++)
	{
		x = n >> i;
		/* printf("%lu  %lu, ", ref, x ); */
		_putchar((1&x) + '0');
	}

}
