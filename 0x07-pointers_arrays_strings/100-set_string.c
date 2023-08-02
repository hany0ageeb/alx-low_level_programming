#include <stddef.h>
#define MAX_SIZE 1000
/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: a string to set
 * @to: a value to be set to
 * Return: void
 */
void set_string(char **s, char *to)
{
	int index = 0;
	char _s[MAX_SIZE];

	if (to == NULL)
	{
		*s = NULL;
		return;
	}
	while (to[index] != '\0' && index < MAX_SIZE)
	{
		_s[index] = to[index];
		index++;
	}
	_s[index] = '\0';
	*s = _s;
}

