/**
 * cap_string - a function that capitalizes all words of a string
 * @s: string.
 * Return: s with each word capitalized.
 */
char *cap_string(char *s)
{
	int i, j, word_first_letter = 1;

	for (i = 0; s[i] != '\0'; ++i)
	{
		j = i;
		while ((s[j] == ',' || s[j] == ';' || s[j] == '.'
				|| s[j] == '!' || s[j] == '?'
				|| s[j] == '"' || s[j] == '('
				|| s[j] == ')' || s[j] == '{'
				|| s[j] == '}' || s[j] == ' '
				|| s[j] == '\t' || s[j] == '\n'
				) && s[j] != '\0')
		{
			j++;
			word_first_letter = 1;
		}
		if (s[j] >= 'a' && s[j] <= 'z' && word_first_letter == 1)
			s[j] -= 32;
		i = j;
		word_first_letter = 0;
	}
	return (s);
}

