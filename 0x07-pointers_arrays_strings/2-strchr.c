#include <stddef.h>
/**
 * _strchr -   a function that locates a character in a string.
 * @s: string
 * @c: char
 * Return: pointer to the first occu or null
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *pret = NULL;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == c)
		{
			pret = &s[i];
			return (pret);
		}
	}
	return (pret);
}
