/**
 * _strncpy -  a function that copies a string
 * @dest: destination buffer
 * @src: source buffer
 * @n: max number of char to copy from src to destination.
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; ++i)
		dest[i] = src[i];
	for (; i < n; ++i)
		dest[i] = '\0';
	return (dest);
}

