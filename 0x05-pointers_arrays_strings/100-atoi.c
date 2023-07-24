#include <stdio.h>
#define MAX_VAL 100000000
int get_first_index(char *s);
int get_last_index(char *s, int begin);
int calculate_result(char *s, int lastIndexx, int result);
/**
 * get_first_index - get first numeric char index in s
 * @s: string
 * Return: first index of numeric char.
 */
inline int get_first_index(char *s)
{
	int first_index = 0;

	while ((s[first_index] < '0' || s[first_index] > '9') &&
			s[first_index] != '\0')
		first_index++;
	return (first_index);
}
/**
 * get_last_index - get last numeric char index in s
 * @s: string
 * @begin: start index for search
 * Return: last numeric char index
 */
inline int get_last_index(char *s, int begin)
{
	int last_index = begin;

	while (s[last_index] >= '0' && s[last_index] <= '9'
			&& s[last_index] != '\0')
		last_index++;
	last_index--;
	return (last_index);
}
/**
 * calculate_result - a function to adjust result fo negative sign.
 * @s: original string
 * @last_index: the serahc begin here backward.
 * @result: the postivie number
 * Return: result negative if s has sign -
 */
inline int calculate_result(char *s, int last_index, int result)
{
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
/**
 * _atoi - a function that convert a string to an integer.
 * @s: a string
 * Return: the result int of conversion.
 */

int _atoi(char *s)
{
	int last_index = 0, base = 1, result = 0,
	    first_index = 0, remaining = 0, base1 = 1;

	first_index = get_first_index(s);
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
	last_index = get_last_index(s, last_index);
	while (last_index >= first_index && s[last_index] >= '0'
			&& s[last_index] <= '9')
	{
		if ((result) >= (MAX_VAL))
		{
			remaining += (s[last_index] - 48) * base *  base1;
			base1 *= 10;
		}
		else
		{
			result += (s[last_index] - 48) * base * base1;
			base *= 10;
		}
		last_index--;
	}
	result = calculate_result(s, last_index, result);
	if (remaining > 0 && result < 0)
		remaining *= -1;
	return (result + remaining);
}

