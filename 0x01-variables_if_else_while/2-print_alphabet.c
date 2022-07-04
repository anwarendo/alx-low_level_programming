#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 for success
 */
int main(void)
{
	char c = 'a';
	char n = '\n';
	while (c <= 'z')
	{
		putchar(c++);
	}
	putchar(n);
	return (0);
}
