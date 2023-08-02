/**
 * is_multiple_of_rec - checks if n is divisable by m
 * @n: integer
 * @m: integer
 * Return: 1 if n mod m equal 0 otherwise 0
 */
int is_multiple_of_rec(int n, int m)
{
	if (m >= n)
		return (0);
	else if (n % m == 0)
		return (1);
	else
		return (is_multiple_of_rec(n, m + 1));
}
/**
 * is_prime_number - checks if n is a prime number.
 * @n: integer
 * Return: 1 if n is a prime number 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_multiple_of_rec(n, 2) ? 0 : 1);
}

