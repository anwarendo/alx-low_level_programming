#include "function_pointers.h"

/**
 * array_iterator - executes a function for each element of the array param
 * @array: the array
 * @size: size of the array
 * @action: pointer function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size != 0 && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
