#include <stdio.h>
/**
 * _atoi - a function that convert a string to an integer.
 * @s: a string
 * Return: the result int of conversion.
 */

int _atoi(char *s)
{
	int last_index = 0, base = 1, result = 0, first_index = 0;

	while ((s[first_index] < '0' || s[first_index] > '9') &&
			s[first_index] != '\0')
		first_index++;
	if (s[first_index] == '\0')
	{
		first_index--;
		if (first_index == -1)
			return (0);
	}
	else if (s[first_index] < '0' || s[first_index] > '9')
	{
		return (0);
	}
	last_index = first_index;
	while (s[last_index] >= '0' && s[last_index] <= '9'
			&& s[last_index] != '\0')
		last_index++;
	last_index--;
	while (last_index >= first_index && s[last_index] >= '0'
			&& s[last_index] <= '9')
	{
		result += (s[last_index] - 48) * base;
		base *= 10;
		last_index--;
	}
	while (last_index >= 0)
	{
		if (s[last_index] == '-')
		{
			result *= -1;
		}
		last_index--;
	}
	return (result);
}

