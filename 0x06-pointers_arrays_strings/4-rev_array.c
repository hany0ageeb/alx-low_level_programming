/**
 * reverse_array - a function that reverses the content of an array of integers.
 * @a: array of integers
 * @n: the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n-1, temp;

	while (i < j && i < n && j >= 0)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}

