#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: arguments count
 * @av: arguments vector
 * Return: pointer for the concatenated str
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int col;
	int size;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	for (i = 0; i < ac; i++)
		size += strlen(av[i]);
	str = malloc(size * sizeof(char));
	if (!str)
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
		{
			col = strlen(av[i]);
			for (j = 0; j < col; j++)
			{
				str[i * col - 1 + j] = av[i][j];
				printf("%s\n", av[i]);
			}
		}
		return (str);
	}
}
