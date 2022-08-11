#ifndef STDIO
#define STDIO
#include <stdio.h>
#endif /* STDIO */

#ifndef STDDEF
#define STDDEF
#include <stddef.h>
#endif /* STDDEF */

#ifndef STRING
#define STRING
#include <string.h>
#endif /* STRING */

#ifndef LIST_S
#define LIST_S
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
#endif /* LIST_S */

#ifndef PRINT_LIST
#define PRINT_LIST
size_t print_list(const list_t *h);
#endif /* PRINT_LIST */
