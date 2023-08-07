#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -  a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter.
 * @str: string to copy
 * Return: a pointer to a new string which is a duplicate of the string str
 */
char *_strdup(char *str)
{
	char *s = NULL;
	int size, i;

	if (str != NULL)
	{
		size = strlen(str) + 1;
		if (size > 0)
		{
			s = malloc(sizeof(char) * size);
			if (s != NULL)
			{
				for (i = 0; i < size; i++)
				{
					s[i] = str[i];
				}
			}
		}
	}
	return (s);
}

