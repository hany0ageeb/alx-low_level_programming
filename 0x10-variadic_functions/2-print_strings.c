#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argptr;
	unsigned int i;
	char *str = (void *)0;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	va_start(argptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(argptr, char *);
		printf("%s", str == (void *)0 ? "(nil)" : str);
		if (separator != (void *)0 && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(argptr);
}

