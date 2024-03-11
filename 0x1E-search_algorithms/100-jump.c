#include <math.h>
#include <stdio.h>
/**
 * max - find the maximum of two ints a, b
 * @a: first integer
 * @b: second integer
 * Return: the minimum between a and b
 */
inline long int max(long int a, long int b)
{
	if (a >= b)
		return (a);
	return (b);
}
/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm (block search)
 * @array:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located otherwise return -1
 */
int jump_search(int *array, size_t size, int value)
{
	const size_t b_size = (size_t)sqrt(size);
	size_t a = 0, b = 0;

	if (array == NULL)
		return (-1);
	while (a < size && array[a] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a += b_size;
	}
	b = a;
	a = max(0, a - b_size);
	printf("Value found between indexes [%ld] and [%ld]\n", a, b);
	while (a <= b && a < size)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a++;
	}
	return (-1);
}
