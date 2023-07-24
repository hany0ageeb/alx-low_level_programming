/**
 * _strlen - a function that returns the length of a string.
 * @s: string
 * Return: length of s.
 */
int _strlen(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	return (index);
}

