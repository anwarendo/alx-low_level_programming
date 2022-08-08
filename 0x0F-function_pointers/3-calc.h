#ifndef STDIO
#define STDIO
#include <stdio.h>
#endif /* STDIO */

#ifndef STDDEF
#define STDDEF
#include <stddef.h>
#endif /* STDDEF */

#ifndef STDLIB
#define STDLIB
#include <stdlib.h>
#endif /* STDLIB */

#ifndef OP
#define OP
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
#endif /* OP */

#ifndef OP_ADD
#define OP_ADD
int op_add(int a, int b);
#endif /* OP_ADD */

#ifndef OP_SUB
#define OP_SUB
int op_sub(int a, int b);
#endif /* OP_SUB */

#ifndef OP_MUL
#define OP_MUL
int op_mul(int a, int b);
#endif /* OP_MUL */

#ifndef OP_DIV
#define OP_DIV
int op_div(int a, int b);
#endif /* OP_DIV */

#ifndef OP_MOD
#define OP_MOD
int op_mod(int a, int b);
#endif /* OP_MOD */

#ifndef GET_OP_FUNC
#define GET_OP_FUNC
int (*get_op_func(char *s))(int, int);
#endif /* GET_OP_FUNC */
