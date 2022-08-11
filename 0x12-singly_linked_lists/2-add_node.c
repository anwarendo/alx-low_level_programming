#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: the head node of the list
 * @str: the string to be duplicated to the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *h;

	h = malloc(sizeof(list_t));
	if (h == NULL)
		return (NULL);
	h->str = strdup(str);
	h->len = strlen(str);
	h->next = *head;
	*head = h;
	return (h);
}
