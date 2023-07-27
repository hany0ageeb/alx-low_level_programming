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
 * print_last_digit - a function to print last digit int num
 * @num: the number (integer)
 * Return: the remainig of the number after removing the printed digit.
 */
int print_last_digit(int num)
{
	int base = 1, base1 = 1, remainder = 0, temp_num = num;

	while (num != 0)
	{
		remainder = num % 10;
		num /= 10;
		if (base < 1000000000)
			base *= 10;
		else
			base1 *= 10;
	}
	if (base1 == 1)
		num = temp_num - remainder * (base / 10);
	else
		num = temp_num - remainder * base;
	if (remainder >= 0)
		_putchar(48 + remainder);
	else
		_putchar (48 + remainder * -1);
	return (num);
}
/**
 * print_number - a function that prints an integer.
 * @n: an integer to print
 * Return: void
 */

void print_number(int n)
{
	int digits_count = count_number_digits(n);
	int printed_digits = 0, remaining_digit_count;

	if (n < 0)
	{
		_putchar('-');
	}
	while (printed_digits < digits_count)
	{
		n = print_last_digit(n);
		printed_digits++;
		remaining_digit_count = count_number_digits(n);
		while (remaining_digit_count < (digits_count - printed_digits))
		{
			_putchar('0');
			printed_digits++;
		}
	}
}

