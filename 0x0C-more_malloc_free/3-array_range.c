#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: minimum integer (included)
 * @max: maximum integer (included)
 * Return: a pointer to newly created array.
 */
int *array_range(int min, int max)
{
	int *arr = NULL;
	unsigned int i;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr != NULL)
	{
		i = 0;
		while (min <= max)
		{
			arr[i] = min;
			i++;
			min++;
		}
	}
	return (arr);
}

