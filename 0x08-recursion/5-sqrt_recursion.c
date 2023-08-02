/**
 * _sqrt -calc the natural sqrt of n
 * @n: an intgere
 * @sqrt: the initial guess of n sqrt value
 * Return: natural sqrt of n or -1
 */
int _sqrt(int n, int sqrt)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (sqrt < 0)
		return (-1);
	if (sqrt * sqrt > n)
		return (_sqrt(n, sqrt - 1));
	else if (sqrt * sqrt == n)
		return (sqrt);
	return (-1);
}
/**
 * _sqrt_recursion -  a function that returns the natural
 * square root of a number
 * @n: an integer
 * Return: natural square root of n or -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, n - 1));
}
