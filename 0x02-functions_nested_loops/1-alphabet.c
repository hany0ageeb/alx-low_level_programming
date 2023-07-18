#include "main.h"
/**
 * print_alphabet - this function prints char fomr a - z to the std all small.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		_putchar(c);
	}
	_putchar('\n');
}

