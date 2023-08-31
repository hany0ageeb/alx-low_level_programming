/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: from number
 * @m: to number
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int tmp;

	if (n == m)
		return (0);
	tmp = n ^ m;
	while (tmp > 0)
	{
		count++;
		tmp &= (tmp - 1);
	}
	return (count);
}

