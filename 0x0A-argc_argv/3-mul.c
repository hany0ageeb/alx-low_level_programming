#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * is_number - check s is valid int
 * @s: string
 * Return: 1 if valid 0 otherwise.
 */
int is_number(char *s)
{
	if (s == NULL)
		return (0);
	if (*s == '\0')
		return (0);
	if (*s == '-' || *s == '+')
		s++;
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}
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
	if (!is_number(argv[1]) || !is_number(argv[1]))
	{
		printf("ERROR\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}

