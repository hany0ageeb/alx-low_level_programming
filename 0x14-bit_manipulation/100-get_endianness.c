/**
 * get_endianness - that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *pi = (char *)&i;

	if (*pi == 1)
		return (1);
	else
		return (0);
}

