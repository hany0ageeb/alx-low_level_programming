#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int index;

	for (index = 0;  str[index] != '\0'; index++)
	{
		_putchar(str[index]);
		index++;
		if (str[index] == '\0')
			break;
	}
	_putchar('\n');
}

