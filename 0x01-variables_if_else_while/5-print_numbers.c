#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 for success
 */
int main(void)
{
	int i;
	char nl;

	i = 0;
	nl = '\n';
	while (i < 10)
		putchar(i++);
	putchar(nl);
	return (0);
}
