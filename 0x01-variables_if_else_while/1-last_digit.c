#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The main function
 * Return: 0 for success
 */
int main(void)
{
	int n;
	int ld;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n%10;
	if (ld > 5)
		printf("Last digit of %lu is %lu and is greater than 5\n", (unsigned long)n, (unsigned long)ld);
	else if (ld == 0)
		printf("Last digit of %lu is %lu and is 0\n", (unsigned long)n, (unsigned long)ld);
	else if (ld < 6 && ld != 0)
		printf("Last digit of %lu is %lu and is less than 6 and not 0\n", (unsigned long)n, (unsigned long)ld);
	return (0);
}
