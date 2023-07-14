#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
char c = 'a';
for (; c <= 'z'; ++c)
if (c != 'q' && c != 'e')
putchar(c);
putchar('\n');
return (0);
}
