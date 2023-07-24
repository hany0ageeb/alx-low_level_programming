/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: a pointer to the first int
 * @b: a pointer to the second int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
