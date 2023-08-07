#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: the second string
 * Return: a string that is s1 + s2 + '\0'
 */
char *str_concat(char *s1, char *s2)
{
	int size = 0, i;
	char *str = NULL;

	if (s1 != NULL)
		size += strlen(s1);
	if (s2 != NULL)
		size += strlen(s2);
	size++;
	str = malloc(sizeof(char) * size);
	if (str != NULL)
	{
		i = 0;
		while (s1 != NULL && *s1 != '\0' && i < size)
		{
			str[i] = *s1;
			i++;
			s1++;
		}
		while (s2 != NULL && *s2 != '\0' && i < size)
		{
			str[i] = *s2;
			i++;
			s2++;
		}
		str[i] = '\0';
	}
	return (str);
}

