/**
 * flip_bits - a function that returns the number of bits you would need to flip to get from one number to another.
 * @n: from number
 * @m: to number
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	const unsigned long int one = 1;
	unsigned long int t1, t2;
	unsigned int count = 0;

	while (n > 0 || m > 0)
	{
		t1 = n & one;
		t2 = m & one;
		if (t1 != t2)
			count++;
		n >>= one;
		m >>= one;
	}
	return (count);
}

