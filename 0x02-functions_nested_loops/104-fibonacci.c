#include <stdio.h>
/**
 * print_fibonacci - print first n fibonacci num
 * @n: number of fibonacci series
 */
void print_fibonacci(int n)
{
	unsigned long int f1 = 1, f = 1, next;

	if (n < 0)
		return;
	if (n >= 1)
	{
		printf("%ld", f1);
	}
	while (n >= 2)
	{
		next = f + f1;
		printf(", %ld", next);
		f1 = f;
		f = next;
		n--;
		if (next == 7540113804746346429)
			break;
	}
	printf(", 12200160415121876738, 19740274219868223167, 31940434634990099905,");
	printf(" 51680708854858323072, 83621143489848422977, 135301852344706746049");
	printf(", 218922995834555169026");
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

