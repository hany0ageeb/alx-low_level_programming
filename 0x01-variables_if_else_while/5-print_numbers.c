#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
unsigned short num = 0;
do {
printf("%d", num);
num++;
} while (num < 10);
putchar('\n');
return (0);
}
