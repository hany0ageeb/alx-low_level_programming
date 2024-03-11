#include <stdio.h>
/**
 * print_array - print array from low index to high index
 * @array: a pointer to the first element of the array to print
 * @low: low index to start print from
 * @high: high index to end print at
 */
void print_array(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	while (low <= high)
	{
		printf("%d", array[low]);
		if (low < high)
			printf(", ");
		else
			printf("\n");
		low++;
	}
}
/**
 * b_search - search an array using binary search
 * @array: a pointer to the first element of the array to search in
 * @low: low index
 * @high: high index
 * @value: the value to search for
 * Return: -1 if value is not present otherwise
 * the index where value is located
 */
int b_search(int *array, size_t low, size_t high, int value)
{
	size_t mid = (low + high) / 2;

	if (low > high)
		return (-1);
	print_array(array, low, high);
	if ((low == high && array[low] == value) ||
			(high - low == 1 && array[low] == value))
		return (low);
	if (high - low == 1 && array[high] == value)
		return (high);
	if (array[mid] == value)
		return (b_search(array, low, mid, value));
	else if (array[mid] > value)
		return (b_search(array, low, mid - 1, value));
	return (b_search(array, mid + 1, high, value));
}
/**
 * advanced_binary - searches for a value in a sorted array of integers.
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: -1 if array is NULL or value is not present in array
 * otherwise return the first index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	return (b_search(array, low, high, value));
}
