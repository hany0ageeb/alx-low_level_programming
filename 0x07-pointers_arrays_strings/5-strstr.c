#include <stddef.h>
/**
 * _strstr - function that locates a substring.
 * @haystack: string to be searched
 * @needle: a substring to locate
 * Return: the locater substrng or null
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, start;
	char *ptr = NULL;

	for (i = 0; haystack[i] != '\0'; ++i)
	{
		if (needle[0] == haystack[i])
		{
			start = i + 1;
			j = 1;
			ptr = &haystack[i];
			while (needle[j] != '\0')
			{
				if (needle[j] != haystack[start])
				{
					ptr = NULL;
					break;
				}
				j++;
				start++;
			}
		}
	}
	return (ptr);
}


