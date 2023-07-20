#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: 0 always
 */
int main(void)
{
	long int i = 2, n = 612852475143, lpf = -1;

	while (i * i <= n)
	{
		while (n % i == 0)
		{
			n = n / i;
			if (i > lpf)
				lpf = i;
		}
		i++;
	}
	if (n > 1)
	{
		if (n > lpf)
			lpf = n;
	}
	printf("%ld\n", lpf);
	return (0);
}
