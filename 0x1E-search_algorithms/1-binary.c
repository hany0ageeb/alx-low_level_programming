#include <stdio.h>
/**
 * print_array - print array
 * @array: pointer to the first element of the array to print
 * @lo: low index
 * @hi: hi index
 */
void print_array(int *array, int lo, int hi)
{
	printf("Searching in array: ");
	while (lo <= hi)
	{
		printf("%d", array[lo]);
		if (lo < hi)
			printf(", ");
		else
			printf("\n");
		lo++;
	}
}
/**
 * binary_search - search for a value using binary search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: -1 if array is NULL or value is not present
 * otherwise return the first index of value in array
 */
int binary_search(int *array, size_t size, int value)
{
	int lo = 0, hi = size - 1, mid;

	if (array == NULL)
		return (-1);
	while (lo <= hi)
	{
		print_array(array, lo, hi);
		mid = (lo + hi) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			lo = mid + 1;
		else
			hi = mid - 1;
	}
	return (-1);
}
