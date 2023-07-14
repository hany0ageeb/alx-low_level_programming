#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
unsigned short int first = 0, second, third;
for (; first <= 9; ++first)
{
second = first + 1;
for (; second <= 9; ++second)
{
third = second + 1;
for (; third <= 9; ++third)
{
putchar(48 + first);
putchar(48 + second);
putchar(48 + third);
if (first != 7 || second != 8 || third != 9)
{
putchar (',');
putchar (' ');
}
}
}
}
putchar('\n');
return (0);
}
