#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: args count
 * @argv: args
 * Return: 1 if argc < 3 0 otherwise
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	exit(EXIT_SUCCESS);
}

