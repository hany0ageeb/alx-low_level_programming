#include <stdio.h>
/**
 * print_array - print array
 * @array: pointer to the first element of the array to print
 * @low: low index
 * @hi: hi index
 */
void print_array(int *array, size_t low, size_t hi)
{
	printf("Searching in array: ");
	while (low <= hi)
	{
		printf("%d", array[low]);
		if (low < hi)
			printf(", ");
		else
			printf("\n");
		low++;
	}
}
/**
 * b_search - search array of ints for value using binary search
 * @array: a pointer to the first element of the array to search in
 * @low: low index
 * @hi: high index
 * @value: the value to search for
 * Return: -1 if value is not present otherwise the first index of value
 */
static int b_search(int *array, size_t low, size_t hi, int value)
{
	size_t mid;

	while (low <= hi)
	{
		print_array(array, low, hi);
		mid = (low + hi) / 2;
		if (array[mid] == value)
			return ((int)mid);
		else if (array[mid] > value)
			hi = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
/**
 * min - find the minimum between to values
 * @a: first value
 * @b: second value
 * Return: a if a <= b otherwise return b
 */
static inline size_t min(size_t a, size_t b)
{
	if (a <= b)
		return (a);
	return (b);
}
/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: -1 if array is NULL or value not present
 * otherwise  the first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL || size == 0)
		return (-1);
	/*determines a range where the search key resides if it wre in the list*/
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			bound / 2, min(bound, size - 1));
	return (b_search(array, bound / 2, min(bound, size - 1), value));
}
