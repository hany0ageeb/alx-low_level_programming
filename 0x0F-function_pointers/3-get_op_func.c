#include "3-calc.h"
#include <stddef.h>
#include <string.h>
#define MAX_OP_SIZE 6
/**
 * get_op_func -  the function that selects the correct
 * function to perform the operation
 * @s: the operation (+, -, *, /, %)
 * Return: a pointer to a function or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < MAX_OP_SIZE)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (ops[MAX_OP_SIZE - 1].f);
}

