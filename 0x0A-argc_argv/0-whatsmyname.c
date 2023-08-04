#include <stdio.h>
#include <stdlib.h>
/**
 * main -  a program that prints its name, followed by a new line.
 * @argc: arg count
 * @argv: args
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	if (argc <= 0)
		exit(EXIT_FAILURE);
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}

