/**
 * int_index - function that searches for an integer.
 * @array: array to search
 * @size: array size
 * @cmp: compare func pointer.
 * Return: index of or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp != (void *)0)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}

