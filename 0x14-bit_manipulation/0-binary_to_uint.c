#include <stddef.h>
/**
 * _strlen - a function that return the length of string
 * @b: string
 * Return: kength of b
 */
unsigned int _strlen(const char *b)
{
	unsigned int len = 0;

	while (b[len] != '\0')
		len++;
	return (len);
}
/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int j;
	unsigned int weight = 1;

	if (b == NULL)
		return (0);
	j = _strlen(b) - 1;
	for (; j >= 0; j--)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		value += (b[j] - 48) * weight;
		weight *= 2;
	}
	return (value);
}

