#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
unsigned short int first = 0, second;
for (; first <= 9; ++first)
{
second = first + 1;
for (; second <= 9; ++second)
{
putchar(48 + first);
putchar (48 + second);
if (first < 8 || second < 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
