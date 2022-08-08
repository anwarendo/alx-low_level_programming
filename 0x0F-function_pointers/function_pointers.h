#ifndef STDDEF
#define STDDEF
#include <stddef.h>
#endif /* STDDEF */

#ifndef PRINT_NAME
#define PRINT_NAME
void print_name(char *name, void (*f)(char *));
#endif /* PRINT_NAME */

#ifndef ARRAY_ITERATOR
#define ARRAY_ITERATOR
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /* ARRAY_ITERATOR */

#ifndef INT_INDEX
#define INT_INDEX
int int_index(int *array, int size, int (*cmp)(int));
#endif /* INT_INDEX */
