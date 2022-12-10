/**
 * _sqrt - This function finds the sqrt of the argument n
 * @n: The squre of n
 * @m: counter
 *
 * Return: sq
 */

int _sqrt(int n, int m)
{
	if ((m * m) == n)
	{
		return (m);
	}
	else if (n < 0 || m == n)
	{
		return (-1);
	}
	return (_sqrt(n, m + 1));
}

/**
 * _sqrt_recursion - This find returns the square root of n
 * @n: n
 *
 * Return: sqr
 */

int _sqrt_recursion(int n)
{
	int m = n;

	if (n == m)
	{
		return (_sqrt(n, 0));
	}
	return (_sqrt_recursion(n));
}

