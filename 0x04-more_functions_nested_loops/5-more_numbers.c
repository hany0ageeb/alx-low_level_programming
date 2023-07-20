#include "main.h"

/**
 * print_number - this function takes an integer and print to std
 * @num: the number to print
 */

void print_number(int num)
{
	int abs_num, base = 10, index = -1, remainder;
	char digits[11];

	if (num < 0)
	{
		abs_num = num * -1;
	}
	else
	{
		abs_num = num;
	}
	if (abs_num < 10)
	{
		if (num < 0)
			_putchar('-');
		_putchar(48 + num);
	}
	else
	{
		while (abs_num > 0)
		{
			remainder = abs_num % base;
			index++;
			digits[index] = remainder / (base / 10);
			abs_num -= remainder;
			base *= 10;
		}
		if (num < 0)
			_putchar('-');
		while (index >= 0)
		{
			_putchar(48 + digits[index]);
			index--;
		}
	}
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

