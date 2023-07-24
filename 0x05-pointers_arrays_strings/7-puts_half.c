#include "main.h"

/**
 * _strlen - a function that return string length.
 * @str: a string
 * Return: the length of the str
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length++] != '\0')
		;
	return (length == 0 ? length : length - 1);
}
/**
 * is_odd - a function to check if a number is odd
 * @num: the integer
 * Return: 1 if num is odd 0 otherwise
 */
inline int is_odd(int num)
{
	return (num % 2 != 0 ? 1 : 0);
}
/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int length = _strlen(str), mid;

	if (length > 0)
	{
		if (is_odd(length))
			mid = (length - 1) / 2;
		else
			mid = length / 2;
		while (str[mid] != '\0')
		{
			_putchar(str[mid]);
			mid++;
		}
		_putchar('\n');
	}
}

