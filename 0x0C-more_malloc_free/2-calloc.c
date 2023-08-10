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

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	return (ptr);
}

