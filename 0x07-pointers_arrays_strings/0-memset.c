#include <stddef.h>
/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: memory area
 * @b: byte
 * @n: number of bytes
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char* temp = s;

	while (n > 0 && temp != NULL)
	{
		*temp = b;
		temp++;
		n--;
	}
	return (s);
}

