#include "lists.h"

/**
 * count_nodes - counts nodes recursively
 * @node: a node from the list
 * Return: the count
 */
size_t count_nodes(const list_t *node)
{
	if (node == NULL)
		return (0);
	if (node->next == NULL)
		return (1);
	else
	{
		return (1 + count_nodes(node->next));
	}
}

/**
 * list_len - prints all the elements of a list
 * @h: pointer for a list_t structure
 * Return: the number of nodes (of type list_s structure)
 */
size_t list_len(const list_t *h)
{
	return (count_nodes(h));
}
