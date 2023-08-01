#include <stdlib.h>
/**
 * _strlen - a function to calc string length
 * @s: string
 * Return: s length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: a string to set
 * @to: a value to be set to
 * Return: void
 */
void set_string(char **s, char *to)
{
	int len = _strlen(to), index = 0;
	char *_s = malloc(sizeof(char) * (len + 1));

	while (to[index] != '\0')
	{
		_s[index] = to[index];
		index++;
	}
	_s[index] = '\0';
	*s = _s;
}

