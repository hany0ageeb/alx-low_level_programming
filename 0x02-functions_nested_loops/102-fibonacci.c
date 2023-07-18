#include <stdio.h>
/**
 * print_fibonacci - print first n fibonacci num
 * @n: number of fibonacci series
 */
void print_fibonacci(int n)
{
	long int  f1 = 1, f;

	if (n < 0)
		return;
	if (n >= 2)
	{
		printf("%ld", f1);
	}
	while (n >= 3)
	{
		f = f1 + f0;
		printf(", %ld", f);
		f0 = f1;
		f1 = f;
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
	print_fibonacci(50);
	return (0);
}

