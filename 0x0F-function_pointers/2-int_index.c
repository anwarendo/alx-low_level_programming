#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of the integers
 * @size: size of the array
 * @cmp: pointer function to compare each array element with the to be searched
 * Return: the index of the searched element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size != 0 && cmp != NULL)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
