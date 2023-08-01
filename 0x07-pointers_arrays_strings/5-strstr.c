#include <stddef.h>
/**
 * _strstr - function that locates a substring.
 * @haystack: string to be searched
 * @needle: a substring to locate
 * Return: the locater substrng or null
 */

char *_strstr(char *haystack, char *needle)
{
	char *start = NULL, *src, *substr;
	
	if (needle == NULL)
	{
		return (NULL);
	}
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (haystack != NULL && *haystack != '\0')
	{
		if (*haystack == *needle)
		{
			start = haystack;
			src = haystack + 1;
			substr = needle + 1;
			while (*substr != '\0')
			{
				if (*substr != *src)
				{
					start = NULL;
					break;
				}
				src++;
				substr++;
			}
		}
		haystack++;
	}
	return (start);
}




