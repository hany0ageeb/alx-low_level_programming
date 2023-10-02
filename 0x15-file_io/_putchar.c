#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the characthter c to stdout
 * @c: the char to print
 * Return: 1 on success, on error <F4>1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

