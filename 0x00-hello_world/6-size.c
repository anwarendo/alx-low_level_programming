#include<stdio.h>

/**
 * main - The main function
 * Description: Prints various sizes for variable types
 * Return: 0 for success
 */
int main(void)
{
	char c;
	long long n;
	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(n));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
