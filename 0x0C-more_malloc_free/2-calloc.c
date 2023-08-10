#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of array members.
 * @size: array member size.
 * Return: a pointer to allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	char *temp = NULL;
	unsigned int i, initialized_size;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr != NULL)
	{
		temp = (char *)ptr;
		i = 0;
		initialized_size = 0;
		while (i < nmemb)
		{
			*temp = 0;
			temp++;
			initialized_size += (unsigned int)sizeof(char);
			if (initialized_size == size)
			{
				i++;
				initialized_size = 0;
			}
		}
	}
	return (ptr);
}

