#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: number
 * @index: he index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	while (index > 0)
	{
		mask = mask << 1;
		if (mask == 0)
			return (-1);
		index--;
	}
	if ((n & mask) == 0)
		return (0);
	else
		return (1);

}

