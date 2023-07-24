#include "main.h"

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: a string
 * Return: void
 */

void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')
		index++;
	while (index-- > 0)
		_putchar(s[index]);
	_putchar('\n');
}

