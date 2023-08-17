#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of int to sum
 * Return: sum of the passed numbers.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list argptr;

	if (n <= 0)
		return (sum);
	va_start(argptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(argptr, int);
	return (sum);
}

