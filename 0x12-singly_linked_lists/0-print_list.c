#include "lists.h"

/**
 * count_nodes - counts nodes recursively
 * @node: a node from the list
 * Return: the count
 */
size_t count_nodes(const list_t *node)
{
	if (node->next == NULL)
		return (1);
	else
	{
		if (node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", node->len, node->str);
		if (node->next->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", node->next->len, node->next->str);
		return (1 + count_nodes(node->next));
	}
}

/**
 * print_list - prints all the elements of a list
 * @h: pointer for a list_t structure
 * Return: the number of nodes (of type list_s structure)
 */
size_t print_list(const list_t *h)
{
	return (count_nodes(h));
}
