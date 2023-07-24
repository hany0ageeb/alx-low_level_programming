/**
 * rev_string -  function that reverses a string.
 * @s: a string to revers
 * Return: void
 */

void rev_string(char *s)
{
	int last_index = 0, first_index = 0;
	char temp;

	while (s[last_index] != '\0')
		last_index++;
	last_index--;
	while (last_index > first_index)
	{
		temp = s[first_index];
		s[first_index] = s[last_index];
		s[last_index] = temp;
		last_index--;
		first_index++;
	}
}

