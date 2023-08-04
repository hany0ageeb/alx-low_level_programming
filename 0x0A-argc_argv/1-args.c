#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: arg count
 * @argv: args
 * Return: 0 always
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}

