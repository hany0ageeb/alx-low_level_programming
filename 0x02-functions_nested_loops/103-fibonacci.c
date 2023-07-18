#include <stdio.h>
/**
 * is_even - function to check if
 * given number is even
 * @n: an int[numbe
 * Return: 1 if even 0 otherwise
 */
inline int is_even(long n)
{
	return (n % 2 == 0 ? 1 : 0);
}
/**
 * main - entry point
 * Return: 0 always
 */
int main(void)
{
	long sum = 0, f1 = 1, next = 1, c;

	while (next <= 4000000)
	{
		if (is_even(next) == 1)
		{
			sum += next;
		}
		c = next + f1;
		f1 = next;
		next = c;
	}
	printf("%ld\n", sum);
return (0);
}

