#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: array size.
 * @c: char to initialize array to
 * Return: pointer to created array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;

	if (size > 0)
	{
		arr = malloc(sizeof(char) * size);
		if (arr != NULL)
		{
			for (i = 0; i < size; i++)
			{
				arr[i] = c;
			}
		}
	}
	return (arr);
}

