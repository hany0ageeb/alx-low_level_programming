#include <limits.h>
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	const unsigned long int bits = sizeof(unsigned long int) * 8;
	const unsigned long int one = 1;
	unsigned long int tmp;

	if (index >= bits)
		return (-1);
	tmp = one << index;
	tmp = ~tmp;
	*n = *n & tmp;
	return (1);
}
