#include <stdio.h>
/**
 * print_fibonacci - print first n fibonacci num
 * @n: number of fibonacci series
 */
void print_fibonacci(int n)
{
	unsigned long long  f1 = 1, f = 1, next;

	if (n < 0)
		return;
	if (n >= 1)
	{
		printf("%lld", f1);
	}
	while (n >= 2)
	{
		next = f + f1;
		printf(", %lld", next);
		f1 = f;
		f = next;
		n--;
	}
	printf("\n");
}
/**
 * main - Entry point
 * Return: always 0
*/
int main(void)
{
	print_fibonacci(98);
	return (0);
}

