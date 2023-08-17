#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator:  the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argptr;
	unsigned int i;
	int arg;

	if (n <= 0)
		return;
	va_start(argptr, n);
	for (i = 0; i < n; ++i)
	{
		arg = va_arg(argptr, int);
		printf("%d", arg);
		if (i < (n - 1) && separator != (void *)0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argptr);
}

