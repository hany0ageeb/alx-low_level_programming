/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array.
 * @array: an int array
 * @size: array size
 * @action: a func to execute.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action != (void *)0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

