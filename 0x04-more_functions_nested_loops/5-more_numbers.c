#include "main.h"

/**
 * print_number - this function takes an integer and print to std
 * @num: the number to print
 */

void print_number(int num)
{
	int last_digit, first_digit;

	last_digit = num % 10;
	first_digit = (num - last_digit) / 10;

	if (first_digit != 0)
		_putchar(48 + first_digit);
	_putchar(48 + last_digit);
}

/**
 * more_numbers - a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 15; ++j)
		{
			print_number(j);
		}
		_putchar('\n');
	}
}

