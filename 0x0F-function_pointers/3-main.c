#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - a program that performs simple operations.
 * @argc: arg count
 * @argv: args
 * Return: 98 if argc is not 4, 99 if argv[2] is not in "+", "-", "*", "/", "%"
 * 100 if argv[3] = 0 and argv[2] is / or %
 * 0 otherwise.
 */
int main(int argc, char **argv)
{
	char *op = NULL;
	int (*op_func)(int, int) = NULL;
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2];
	if (
			strcmp(op, "+") != 0 &&
			strcmp(op, "-") != 0 &&
			strcmp(op, "*") != 0 &&
			strcmp(op, "/") != 0 &&
			strcmp(op, "%") != 0
	   )
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (b == 0 && (strcmp(op, "/") == 0 || strcmp(op, "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}
	op_func = get_op_func(op);
	printf("%d\n", op_func(a, b));
	exit(EXIT_SUCCESS);
}

