#include <stdio.h>

/**
 * _putchar - Prints "_putchar"
 * Return: void
 */
void _putchar(void)
{
	char *s;
	char i;
	
	s = "_putchar\n";
	i = 0;
	while (s[i] != '\n')
		putchar(s[i++]);
	putchar('\n');
}
