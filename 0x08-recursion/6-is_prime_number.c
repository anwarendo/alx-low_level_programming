#include "main.h"

/**
 * is_prime_number - checks for input numbers primality
 * @n: the number to be checked
 * Return: 1 if the input integer is a prime number, or 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2 || n == 3)
		return (1);
	if (n <= 1 || n % 2 == 0 || n % 3 == 0)
		return (0);
	return (1);
}
