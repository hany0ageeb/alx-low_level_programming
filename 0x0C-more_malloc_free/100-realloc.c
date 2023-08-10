#include <stdlib.h>
#include <stddef.h>
/**
 * _realloc - a function that reallocates a memory block using malloc and free.
 * @ptr: a pointer to the memory previously allocated with a call to malloc.
 * @old_size: the size, in bytes, of the allocated space for ptr.
 * @new_size: the new size, in bytes of the new memory block.
 * Return: a pointer to ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *temp = NULL;
	char *src = NULL;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	temp = malloc(new_size);
	if (temp != NULL)
	{
		src = (char *) ptr;
		for (i = 0; i < old_size && i < new_size; i++)
		{
			temp[i] = src[i];
		}
	}
	free(ptr);
	return ((void *)temp);
}

