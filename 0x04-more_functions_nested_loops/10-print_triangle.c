#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size:  the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int hash_count = 1, i, j;

	while (size > 0)
	{
		for (i = 1; i < size; i++)
			_putchar(' ');
		for (j = 0; j < hash_count; j++)
			_putchar('#');
		if (size > 1)
			_putchar('\n');
		size--;
		hash_count++;
	}
	_putchar('\n');
}

