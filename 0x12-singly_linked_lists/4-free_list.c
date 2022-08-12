#include "lists.h"

/**
 * free_node - frees a single node
 * @node: the node to be freed
 * Return: nothing
 */
void free_node(list_t *node)
{
	if (node->next == NULL)
		free(node);
	else
		free_node(node->next);
}

/**
 * free_list - frees a list_t list
 * @head: the head of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	free(head);
}
