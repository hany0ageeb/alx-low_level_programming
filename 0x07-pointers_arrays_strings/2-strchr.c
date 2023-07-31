#include <stddef.h>
/**
 * _strchr -   a function that locates a character in a string.
 * @s: string
 * @c: char
 * Return: pointer to the first occu or null
 */
char *_strchr(char *s, char c)
{
	char *temp = s;

	while (temp != NULL && *temp != '\0')
	{
		if (*temp == c)
			return (temp);
		temp++;
	}
	return (NULL);

}

