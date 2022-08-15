#ifndef STDIO
#define STDIO
#include <stdio.h>
#endif /* STDIO */

#ifndef STDLIB
#define STDLIB
#include <stdlib.h>
#endif /* STDLIB */

#ifndef LISTINT_S
#define LISTINT_S

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

#endif /* LISTINT_S */

#ifndef PRINT_LISTINT
#define PRINT_LISTINT
size_t print_listint(const listint_t *h);
#endif /* PRINT_LISTINT */

#ifndef LISTINT_LEN
#define LISTINT_LEN
size_t listint_len(const listint_t *h);
#endif /* LISTINT_LEN */

#ifndef ADD_NODEINT
#define ADD_NODEINT
listint_t *add_nodeint(listint_t **head, const int n);
#endif /* ADD_NODEINT */
