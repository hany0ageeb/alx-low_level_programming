#include <string.h>
#include <stddef.h>
/**
 * _is_palindrome - check if s is a palindrome
 * @s: string
 * @left: left index
 * @right: rigth index
 * Return: 1 if s is palindrome otherwise 0
 */
int _is_palindrome(char *s, int left, int right)
{
	if (s == NULL || left < 0 || right < 0)
		return (0);
	if (left >= right)
		return (1);
	if (s[left] == s[right])
		return (_is_palindrome(s, left + 1, right - 1));
	return (0);
}
/**
 * is_palindrome - checks if s is a plaindrome
 * @s: string
 * Return: 1 if s is palindrome string otherwise 0
 */
int is_palindrome(char *s)
{
	int left = 0, right = strlen(s) - 1;

	return (_is_palindrome(s, left, right));
}

