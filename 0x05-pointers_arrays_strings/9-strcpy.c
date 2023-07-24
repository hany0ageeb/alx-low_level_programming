/**
 * _strcpy - a function that copies the string pointed to by src
 * to the buffer pointed to by dest.
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; ++index)
	{
		dest[index] = src[index];
	}
	return (dest);
}

