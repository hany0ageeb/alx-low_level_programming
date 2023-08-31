#include "main.h"
#include <stdio.h>

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: number
 */
void print_binary(unsigned long int n)
{
	const int bits = sizeof(unsigned long int) * 8;
	int i = 1;
	unsigned long int tmp, one = 1;
	short int prt0 = -1;

	if (n < 2)
	{
		_putchar(48 + n);
	}
	else
	{
		while (i <= bits)
		{
			tmp = (one << (bits - i));
			tmp = n & tmp;
			if (tmp == 0 && prt0 != -1)
			{
				_putchar('0');
			}
			else if (tmp > 0)
			{
				_putchar('1');
				prt0 = 1;
			}
			i++;
		}
	}
}

