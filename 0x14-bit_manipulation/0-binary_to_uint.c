#include "main.h"
/**
 * _strlen - a function that calculate the length of a string
 * @str: string
 * Return: length of str or zero if str is null or empty
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	if (IS_NULL_OR_EMPTY(str))
		return (0);
	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b:  a string of 0 and 1 chars
 * Return:  the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int w = 1, value = 0;
	unsigned int len = _strlen(b);
	const unsigned int BASE = 2;

	if (len == 0)
		return (0);
	while (len > 0)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
		{
			return (0);
		}
		else
		{
			value += (b[len - 1] - 48) * w;
			w *= BASE;
		}
		len--;
	}
	return (value);

}

