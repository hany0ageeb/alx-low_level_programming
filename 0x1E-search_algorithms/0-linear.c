#include <stdio.h>
/**
 * linear_search - searches for a value in
 * an array of integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: -1 if array is null or
 * value is not present
 * otherwise the first index of value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return ((int)i);
	}
	return (-1);
}
