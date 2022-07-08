#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;
    int i;
    
    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    for (i = 65; i < 97; i++)
    {
	    printf("%c: %d\n", i, i);
    }
    return (0);
}
