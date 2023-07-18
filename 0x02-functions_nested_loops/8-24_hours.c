#include "main.h"
/**
 * print_2_digit_num - accept a two digit numbers and print to
 * std padding 0 to if num between 0 - 9
 * @num: the two digit number
 */
void print_2_digit_num(int num)
{
	if (num >= -99 && num <= 99)
	{
		int last_digit = num % 10;

		if (last_digit == num)
		{
			_putchar('0');
		}
		else
		{
			_putchar(48 + ((num - last_digit) / 10));
		}
		_putchar(48 + last_digit);
	}
}
/**
 * jack_bauer - a function that prints every minute of
 * the day of Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; ++hour)
	{
		for (minute = 0; minute < 60; ++minute)
		{
			print_2_digit_num(hour);
			_putchar(':');
			print_2_digit_num(minute);
			_putchar('\n');
		}
	}
}

