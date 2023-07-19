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
 * print_times_table - a function that prints the n times table,
 * starting with 0
 * @n: the number
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; ++i)
	{
		for (j = 0; j <= n; ++j)
		{
			result = i * j;
			print_number(result);
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				if (((j + 1) * i) < 100)
				{
					_putchar(' ');
				}
				else if (((j + 1) * i) < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}

