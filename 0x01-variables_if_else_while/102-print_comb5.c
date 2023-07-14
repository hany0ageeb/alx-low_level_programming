#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
unsigned short int first = 0, second;
unsigned short int i, j, k, l;
for (; first <= 98; ++first)
{
second = first + 1;
for (; second <= 99; ++second)
{
j = first % 10;
if (j == first)
{
i = 0;
}
else
{
i = (first - j) / 10;
}
l = second % 10;
if (l == second)
{
k = 0;
}
else
{
k = (second - l) / 10;
}
putchar(48 + i);
putchar(48 + j);
putchar(' ');
putchar(48 + k);
putchar(48 + l);
if (first != 98 || second != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
