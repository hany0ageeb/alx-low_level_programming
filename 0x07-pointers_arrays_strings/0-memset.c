/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: memory area
 * @b: byte
 * @n: number of bytes
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}

