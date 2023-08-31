/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: number
 * @index: the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	const unsigned int bits = sizeof(unsigned long int) * 8;
	const unsigned long int one = 1;
	unsigned long int tmp;

	if (index >= bits)
		return (-1);
	tmp = one << index;
	tmp = n & tmp;
	if (tmp == 0)
		return (0);
	return (1);
}

