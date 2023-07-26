/**
 * _strncat - con
 * @dest: destinqtion string
 * @src: source string
 * Returns: dest+src
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i=0; dest[i] != '\0'; ++i)
			;
	for (j = 0; j < n && src[j] != '\0'; ++j, ++i)
		dest[i] = src[j];
	return (dest);
}

