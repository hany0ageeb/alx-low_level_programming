#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
char c = 'z';
do {
putchar(c);
c--;
} while (c >= 'a');
putchar('\n');
return (0);
}

