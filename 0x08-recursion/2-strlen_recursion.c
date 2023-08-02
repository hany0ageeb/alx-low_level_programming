#include <stddef.h>
/**
 * _strlen_recursion -  a function that returns the length of a string.
 * @s: string
 * Return: s length
 */
int _strlen_recursion(char *s)
{
	if (s == NULL || *s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}

