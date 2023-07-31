#include <stddef.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: wtring
 * Return: first
 *
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (s != NULL && *s != '\0')
	{
		temp = accept;
		while (temp != NULL && *temp != '\0')
		{
			if (*temp == *s)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}
	return (NULL);
}

