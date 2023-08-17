#include <stdarg.h>
#include <stdio.h>
/**
 * count_args - a function to count var args in format
 * @format: a list of types of arguments passed
 * Return: number of arguments
 */
unsigned int count_args(const char * const format)
{
	unsigned int n = 0, i;

	if (format == (void *)0 || *format == '\0')
		return (n);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's')
			n++;
		i++;
	}
	return (n);
}
/**
 * print_all - a function that prints anything.
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int n, i;
	va_list argptr;
	char *str = (void *)0;

	if (format == (void *)0 || *format == '\0')
		return;
	n = count_args(format);
	if (n == 0)
		return;
	i = 0;
	va_start(argptr, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(argptr, int));
				break;
			case 'i':
				printf("%d", va_arg(argptr, int));
				break;
			case 'f':
				printf("%f", va_arg(argptr, double));
				break;
			case 's':
				str = va_arg(argptr, char *);
				printf("%s", str == (void *)0 ? "(nil)" : str);
				break;
		}
		if (i < (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(argptr);
}

