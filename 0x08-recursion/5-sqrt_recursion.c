/**
 * _sqrt -calc the natural sqrt of n
 * @n: an intgere
 * @guess: the initial guess of n sqrt value
 * Return: natural sqrt of n or -1
 */
int _sqrt(int n, int guess)
{
	long int n2 = guess * guess;

	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (guess < 0)
		return (-1);
	if (n2 < guess || n2 > n)
		return (_sqrt(n, guess / 2));
	else if (n2 == n)
		return (guess);
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
	return (_sqrt(n, n / 2));
}
