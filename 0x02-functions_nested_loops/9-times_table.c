#include "main.h"
/**
 * print_number - takes a 2 digit max integer
 * and print to std
 * @n: 2 digit integer maximum
 */
void print_number(int n)
{
	int last_digit;

	if (n >= -99 && n <= 99)
	{
		if (n < 0)
		{
			n *= -1;
			_putchar('-');

		}
		last_digit = n % 10;
		if (last_digit != n)
		{
			_putchar(48 + ((n - last_digit) / 10));
		}
		_putchar(48 + last_digit);
	}

}
/**
 * times_table - a function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			result = i * j;
			print_number(result);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

