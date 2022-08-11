#ifndef STDDEF
#define STDDEF
#include <stddef.h>
#endif /* STDDEF */

#ifndef STDIO
#define STDIO
#include <stdio.h>
#endif /* STDIO */

#ifndef LIST_S
#define LIST_S
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
#endif /* LIST_S */

#ifndef COUNT_NODES
#define COUNT_NODES
size_t count_nodes(const list_t *node);
#endif /* COUNT_NODES */

#ifndef PRINT_LIST
#define PRINT_LIST
size_t print_list(const list_t *h);
#endif /* PRINT_LIST */

#ifndef LIST_LEN
#define LIST_LEN
size_t list_len(const list_t *h);
#endif /* LIST_LEN */
