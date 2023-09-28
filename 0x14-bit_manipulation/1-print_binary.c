#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * init_mask - initialize mask
 * Return: initial value
 */
inline unsigned long int init_mask(void)
{
	unsigned long int mask = ULONG_MAX;
	unsigned long int pre = 0;
	const unsigned long int ONE = 1;

	do {
		pre = mask;
		mask = (unsigned long int)(mask << ONE);
	} while (mask > 0);
	return (pre);
}

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = init_mask();
	unsigned long int val;
	Bool is_leading_zero = TRUE;
	const unsigned long int ONE = 1, BASE = 2;

	if (n < BASE)
	{
		_putchar(n + 48);
	}
	else
	{
		do {
			val = n & mask;
			if (val == 0 && !is_leading_zero)
			{
				_putchar('0');
			}
			else if (val != 0)
			{
				_putchar('1');
				is_leading_zero = FALSE;
			}
			mask = (unsigned long int)(mask >> ONE);
		} while (mask > 0);
	}
}

