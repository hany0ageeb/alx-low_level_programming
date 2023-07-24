#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: array of integers
 * @n: the number of elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; ++index)
	{
		printf("%d", a[index]);
		if (index < (n - 1))
			printf(", ");
	}
	printf("\n");
}

