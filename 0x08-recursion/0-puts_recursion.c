/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: string
 * Return: void
 */
#include <stddef.h>
#include "main.h"
void _puts_recursion(char *s)
{
	if (s == NULL || *s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}

