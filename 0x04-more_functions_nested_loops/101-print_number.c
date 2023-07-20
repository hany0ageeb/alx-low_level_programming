#include "main.h"

/**
 * count_number_digits - count the number of digits in a given integer.
 * for example if num =  24 will return 2 if num = 500 will return 3
 * @num: number (integer)
 * Return: the count of digits in num
 */
int count_number_digits(int num)
{
	int count = 0;

	num = num < 0 ? num * -1 : num;
	if (num < 10)
		return (1);
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}
/**
 * print_number - a function that prints an integer.
 * @n: an integer to print
 * Return: void
 */

void print_number(int n)
{
	int digits_count = count_number_digits(num);
	int n1, remainder, base, printed_digits = 0, remaining_digit_count;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n < 10)
	{
		_putchar(48 + n);
	}
	else
	{
		n1 = n;
		while (printed_digits < digits_count)
		{
			base = 1;
			remainder = 0;
			while (n1 > 0)
			{
				remainder = n1 % 10;
				n1 /= 10;
				base *= 10;
			}
			n1 = num - remainder * (base / 10);
			n = n1;
			_putchar(48 + remainder);
			printed_digits++;
			remaining_digit_count = count_number_digits(n1);
			while (remaining_digit_count < (digits_count - printed_digits))
			{
				_putchar('0');
				printed_digits++;
			}
		}
	}
}

