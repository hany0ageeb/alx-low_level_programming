#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_FORMAT_SIZE 100
/**
 * filter_format - filter format to only contain c, i, f, s
 * @format: original format
 * Return: apointer to filterd format
 */
char *filter_format(const char * const format)
{
	char *fmt = malloc(sizeof(char) * MAX_FORMAT_SIZE + 1);
	unsigned int i = 0, j = 0;

	while (format != (void *)0 && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
			case 'i':
			case 'f':
			case 's':
				fmt[j] = format[i];
				j++;
				break;
		}
		i++;
	}
	fmt[j] = '\0';
	return (fmt);
}
/**
 * print_all - a function that prints anything.
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list argptr;
	char *nil_str = "(nil)", *str = (void *)0, *fmt;

	va_start(argptr, format);
	fmt = filter_format(format);
	while (fmt != (void *)0 && fmt[i] != '\0')
	{
		switch (fmt[i])
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
				if (str == (void *)0)
				{
					str = nil_str;
				}
				printf("%s", str);
		}
		if (fmt[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(argptr);
	free(fmt);
	printf("\n");
}

