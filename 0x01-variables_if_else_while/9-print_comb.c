#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
unsigned short int num = 0;
do {
putchar(48 + num);
if (num < 9)
{
putchar(',');
putchar(' ');
}
num++;
} while (num < 10);
putchar('\n');
return (0);
}
