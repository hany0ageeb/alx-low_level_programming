/**
 * leet - function that encodes a string into 1337.
 * @s: string
 * Return: s encoded into 1337
 */
char *leet(char *s)
{
	int i = 0;

	char letters[] = {
		'4', 'B', 'C', 'D',
		'3', 'F', 'G', 'H',
		'I', 'J', 'K', '1',
		'M', 'N', '0', 'P',
		'Q', 'R', 'S', '7',
		'U', 'V', 'W', 'X',
		'Y', 'Z', '[', '\\',
		']', '^', '_', '`',
		'4', 'b', 'c', 'd',
		'3', 'f', 'g', 'h',
		'i', 'j', 'k', '1',
		'm', 'n', '0', 'p',
		'q', 'r', 's', '7',
		'u', 'v', 'w', 'x',
		'y', 'z'};

	for (; s[i] != '\0'; ++i)
	{
	if (s[i] >= 65 && s[i] <= 122)
	{
		s[i] = letters[s[i] - 65];
	}
	}
	return (s);
}

