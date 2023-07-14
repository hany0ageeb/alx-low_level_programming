#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Return: always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int l_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l_dig = (n % 10) < 0 ? (n % 10) * -1 : n % 10;
	if (l_dig > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, l_dig);
	else if (l_dig == 0)
	printf("Last digit of %d is %d and is 0\n", n, l_dig);
	else if (l_dig != 0 && l_dig < 6)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_dig);
	return (0);
}
