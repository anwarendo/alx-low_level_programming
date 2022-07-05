#include <stdio.h>

/**
 * print_alphabet - prints alphabets a to z
 * Return: void (doesn't return anything)
 */
void print_alphabet(void)
{
	char c;
	char nl;

	c = 'a';
	nl = '\n';
	while (c <= 'z')
		putchar(c++);
	putchar(nl);
}

/**
 * main - The main function
 * Return: 0 for success
 */
int main(void)
{
	print_alphabet();
	return (0);
}
