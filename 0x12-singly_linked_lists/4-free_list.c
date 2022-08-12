#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: the head of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	free(head);
}
