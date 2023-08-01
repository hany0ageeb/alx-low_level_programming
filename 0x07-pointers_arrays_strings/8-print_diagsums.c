#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of
 * the two diagonals of a square matrix of integers
 * @a: the matrix
 * @size: the size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int *temp = a;
	int sum = 0;
	int index = 0;

	if (size > 0)
	{
		while (index < (size * size))
		{
			sum += *temp;
			index += (size + 1);
			temp += (size + 1);
		}
		printf("%d, ", sum);
		temp = a + (size - 1);
		index = (size - 1);
		sum = 0;
		while (index <= (size * size - size))
		{
			sum += *temp;
			index += (size - 1);
			temp += (size - 1);
		}
		printf("%d\n", sum);

	}
	else
	{
		printf("0, 0");
	}
}

