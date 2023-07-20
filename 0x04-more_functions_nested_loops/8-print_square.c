#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: the size of the square
 * Return: void
 */

void print_square(int size)
{
	int w, h;

	for (w = 0; w < size; w++)
	{
		for (h = 0; h < size; h++)
		{
			_putchar('#');
		}
		if (w < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

