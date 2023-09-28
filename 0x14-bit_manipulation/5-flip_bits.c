#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: from numer
 * @m: to number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	unsigned long int mask = 1;
	unsigned long int val_n, val_m;

	do {
		val_n = n & mask;
		val_m = m & mask;
		if (!((val_n == 0 && val_m == 0) || (val_n != 0 && val_m != 0)))
			num++;
		mask <<= 1;
	} while (mask > 0);
	return (num);
}

