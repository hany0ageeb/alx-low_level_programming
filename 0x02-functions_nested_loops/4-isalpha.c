/**
 * _isalpha - a function to check if a char is a-z or A-Z
 * @c: the ascii code of the char to check
 * Return: 1 if c is alpha otherwise 0
 */
int _isalpha(int c)
{
	return (c >= 65 && c <= 122 ? 1 : 0);
}

