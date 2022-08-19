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
 * binary_to_uint - convertes a binary number to an unsigned int
 * @b: pointer to the binary numbers string
 * Return: the converted number or 0 if a char or more is not 0\1, or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int i;
	int j;
	int n_bits;
	char *b_array;

	n = 0;
	i = 0;
	if (!b)
		return (0);

	while (b[i] != '\0')
		i++;

	b_array = malloc(i);
	if (!b_array)
		return (0);

	i = 0;
	while (b[i] != '\0')
	{
		b_array[i] = b[i];
		i++;
	}

	n_bits = i - 1;
	i = 0;
	for (j = n_bits; j >= 0; j--, i++)
		if (b_array[j] == '1')
			n += _pow(i);
		else if (b_array[j] != '0')
			return (0);
	return n;
}