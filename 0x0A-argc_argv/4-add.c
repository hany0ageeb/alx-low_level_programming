#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * is_valid_arg - check arg is validnumber.
 * @arg: string
 * Return: 1 if valid num 0  otherwise.
 */
int is_valid_arg(char *arg)
{
	if (arg == NULL)
		return (0);
	if (*arg == '\0')
		return (0);
	while (*arg != '\0')
	{
		if (*arg < '0' || *arg > '9')
			return (0);
		arg++;
	}
	return (1);
}
/**
 * main - a program that adds positive numbers.
 * @argc: args count
 * @argv: args
 * Return: 0 if success 1 failure
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; ++i)
	{
		if (is_valid_arg(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("ERROR\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

