#include <stdio.h>
/**
 * is_multiple_of - check if num is multiple of multi
 * @num1: number to check
 * @multi: multiple
 * Return: 1 if true otherwise 0
 */
inline int is_multiple_of(int num1, int multi)
{
	return (num1 % multi == 0 ? 1 : 0);
}
/**
 * main - entry point
 * Return: 0 always
 */
int main(void)
{
	int num = 1, sum = 0;

	while (num < 1024)
	{
		if (is_multiple_of(num, 3) == 1 || is_multiple_of(num, 5) == 1)
		{
			sum += num;
		}
		num++;
	}
	printf("%d\n", sum);
	return (0);
}

