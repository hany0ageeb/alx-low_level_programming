#include <stdio.h>
/**
 * _atoi - a function that convert a string to an integer.
 * @s: a string
 * Return: the result int of conversion.
 */

int _atoi(char *s)
{
	int last_index = 0, base = 1, result = 0;

	while (s[last_index] != '\0')
		last_index++;
	last_index--;
	while (last_index >= 0 && s[last_index] >= '0' && s[last_index] <= '9')
	{
		result += (s[last_index] - 48) * base;
		base *= 10;
		last_index--;
	}
	if (last_index >= 0 && s[last_index] == '-')
	{
		result *= -1;
	}
	return (result);
}

