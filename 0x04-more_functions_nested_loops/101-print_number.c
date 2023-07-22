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

	/*num = num < 0 ? num * -1 : num;*/
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	if (count < 1)
		count++;
	return (count);
}
/**
 * print_number - a function that prints an integer.
 * @n: an integer to print
 * Return: void
 */

void print_number(int n)
{
	int digits_count = count_number_digits(n);
	int n1, remainder, base, printed_digits = 0, remaining_digit_count;

	if (n < 0)
	{
		_putchar('-');
		/*n *= -1;*/
	}
	n1 = n;
	while (printed_digits < digits_count)
	{
		base = 1;
		remainder = 0;
		while (n1 != 0)
		{
			remainder = n1 % 10;
			n1 /= 10;
			base *= 10;
		}
		n1 = n - remainder * (base / 10);
		n = n1;
		if (remainder >= 0)
			_putchar(48 + remainder);
		else
			_putchar(48 + remainder * -1);
		printed_digits++;
		remaining_digit_count = count_number_digits(n1);
		while (remaining_digit_count < (digits_count - printed_digits))
		{
			_putchar('0');
			printed_digits++;
		}
	}
}

