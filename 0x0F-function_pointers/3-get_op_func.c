#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operations
 * @s: the operator passed as argument
 * @a: the first operand
 * @b: the second operand
 * Return: the result of the operation in integer
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
/*
	while (*s != ops[i][0] && ops[i][0] != NULL)
		i++;
	if (ops[i][0] == NULL)
	{
		printf("Error\n");
		exit(99);
	}
*/
	return (ops[i][1](a, b));
}
