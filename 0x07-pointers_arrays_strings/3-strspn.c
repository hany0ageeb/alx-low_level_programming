#include <stddef.h>
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to scan
 * @accept: search for string
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, found;
	char *temp;

	while (s != NULL && *s != '\0')
	{
		temp = accept;
		found = 0;
		while (temp != NULL && *temp != '\0')
		{
			if (*s == *temp)
			{
				count++;
				found = 1;
			}
			temp++;
		}
		if (found == 0)
		{
			return (count);
		}
		s++;
	}
	return (count);
}

