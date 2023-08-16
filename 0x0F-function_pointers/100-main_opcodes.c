#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the opcodes of its own main function.
 * @argc: args count
 * @argv: args
 * Return: 1 if  argc not 2
 * 2 of ag less than zero
 * 0 otherwise
 */
int main(int argc, char **argv)
{
	int num_of_bytes;
	short int *b = NULL;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_of_bytes = atoi(argv[1]);
	if (num_of_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	b = (short int *)&main;
	while (num_of_bytes > 0)
	{
		printf("%#x", *b);
		num_of_bytes--;
		b++;
	}
	return (0);

}

