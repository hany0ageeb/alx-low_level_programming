#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2
 * Return: a pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int size = 0, s2_len, i;

	if (s1 != NULL)
		size += strlen(s1);
	if (s2 != NULL)
	{
		s2_len = strlen(s2);
		size += s2_len >= n ? n : s2_len;
	}
	size++;
	str = malloc(size * sizeof(char));
	if (str != NULL)
	{
		i = 0;
		while (s1 != NULL && *s1 != '\0')
		{
			str[i] = *s1;
			s1++;
			i++;
		}
		while (s2 != NULL && *s2 != '\0' && n > 0)
		{
			str[i] = *s2;
			s2++;
			i++;
			n--;
		}
		str[i] = '\0';
	}
	return (str);
}

