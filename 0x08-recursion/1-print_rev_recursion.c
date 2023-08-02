#include <stddef.h>
#include "main.h"
/**
 * print_rev - print in reverse
 * @s: string
 * @n_line: if 1 put nw line.
 */
void print_rev(char *s, unsigned int n_line)
{
	if (s == NULL || *s == '\0')
	{
		return;
	}
	s++;
	print_rev(s, 0);
	_putchar(*s);
	if (n_line == 1)
		_putchar('\n');
}
/**
 * _print_rev_recursion - print in revers.
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	print_rev(s, 0);
}

