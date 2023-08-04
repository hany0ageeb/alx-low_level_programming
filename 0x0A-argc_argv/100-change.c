#include <stdio.h>
#include <stdlib.h>
/**
 * minimum_coins - calculate minimum number of coins to
 * make change for an amount of money.
 * @cents: amount of money in cents.
 * Return: min num of coins
 */
int minimum_coins(int cents)
{
	int min_coins = 0;

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			min_coins++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			min_coins++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			min_coins++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			min_coins++;
		}
		else
		{
			min_coins += cents;
			cents = 0;
		}
	}
	return (min_coins);
}
/**
 * main - a program that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: args count
 * @argv: args
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int cents, min_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	min_coins = minimum_coins(cents);
	printf("%d\n", min_coins);
	return (0);

}

