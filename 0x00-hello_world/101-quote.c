#include<stdio.h>

/**
 * main - The main function
 * Return: 1 for error
 */
int main(void)
{
	char c[60] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19,\n";
	int i = 0;

	while(i < 60)
	{
		putchar(c[i++]);
	}
	return (1);
}
