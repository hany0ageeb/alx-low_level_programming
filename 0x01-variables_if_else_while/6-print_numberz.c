#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
unsigned short int num = 0;
do {
putchar(48 + num);
num++;
} while (num < 10);
putchar('\n');
return (0);
}
