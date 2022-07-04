#include <stdio.h>

/**
 * main - The entry
 * Return: 0 for success
 */
int main(void)
{
	char c;
	char nl;

	c = 'a';
	nl = '\n';
	while (c <= 'z')
	{
		//	putchar(c++);
		if (c == 'e' || c == 'q')
		{
			//	putchar('E');
			continue;
		}
		putchar(c++);
	}
	putchar(nl);
	return (0);
}
