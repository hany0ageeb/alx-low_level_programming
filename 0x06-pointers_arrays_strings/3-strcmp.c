/**
 * _strcmp - a function that compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 equals s2 a positive value if s1 > s2
 * a negative value if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; ++i)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	if (s1[i] != '\0' || s2[i] != '\0')
	{
		return (s1[i] - s2[i]);
	}
	return (0);

}

