#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
  char c = '0';
  do {
    putchar(c);
    if (c >= '0' && c < '9')
      c++;
    else if (c == '9')
      c = 'a';
    else if (c >= 'a')
      c++;
  } while (c <= 'f');
  putchar('\n');
  return (0);
}
