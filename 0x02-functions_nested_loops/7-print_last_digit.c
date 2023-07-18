#include <limits.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number to print last digit
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(48 + last_digit);
	return (last_digit);
}

