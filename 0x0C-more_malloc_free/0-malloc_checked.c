#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked -  a function that allocates memory using malloc.
 * @b: memory size in bytes.
 * Return: a pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

