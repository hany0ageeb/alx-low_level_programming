#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - a function that prints anything.
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list argptr;
	char *nil_str = "(nil)";
	char *str = (void *)0;

	va_start(argptr, format);
	while (format != (void *)0 && format[i] != '\0')
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
				if (str == (void *)0)
				{
					str = nil_str;
				}
				printf("%s", str);
		}
		i++;
	}
	va_end(argptr);
	printf("\n");
}

