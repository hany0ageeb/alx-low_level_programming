#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
unsigned short int first = 0, second, third, fourth;
unsigned short int val;
for (; first <= 9; ++first)
{
second = 0;
for (; second <= 9; ++second)
{
val = (second + first * 10) + 1;
if (val <= 9)
{
third = 0;
fourth = val;
}
else
{
fourth = val % 10;
third =  (val - fourth) / 10;
}
for (; third <= 9; ++third)
{
for (; fourth <= 9; ++fourth)
{
putchar(48 + first);
putchar(48 + second);
putchar(' ');
putchar(48 + third);
putchar(48 + fourth);
if (first != 9 || second != 8 || third != 9 || fourth != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
