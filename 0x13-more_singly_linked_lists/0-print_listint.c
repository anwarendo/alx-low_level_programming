#include "lists.h"

/**
 * count_nodes - counts nodes recursively
 * @node: a node from the list
 * Return: the count
 */
size_t count_nodes(const listint_t *node)
{
	if (node == NULL)
		return (0);
	if (node->next == NULL)
	{
		printf("%d\n", 0);
		return (1);
	}
	printf("%d\n", node->n);
	return (1 + count_nodes(node->next));
}

/**
 * print_list - prints all the elements of a list
 * @h: pointer for a list_t structure
 * Return: the number of nodes of type list_s structure
 */
size_t print_listint(const listint_t *h)
{
	return (count_nodes(h));
}
