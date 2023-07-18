#include <stdio.h>
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * , followed by a new line
 * @n: the start natural number to print from
 */
void print_to_98(int n)
{
	do {
		if (n == 98)
		{
			printf("%d", n);
		}
		else if (n > 98)
		{
			printf("%d, ", n);
			n--;
			if (n == 98)
			{
				printf("%d", n);
			}
		}
		else
		{
			printf("%d, ", n);
			n++;
			if (n == 98)
			{
				printf("%d", n);
			}
		}
	} while (n != 98);
	printf("\n");
}

