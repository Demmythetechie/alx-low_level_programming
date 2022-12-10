/**
 * _sqrt - This function finds the sqrt of the argument n
 * @n: The squre of n
 *
 * Return: sq
 */

int _sqrt(int n)
{
	int i = 0;
	int sq = -1;

	while (i <= n)
	{
		if ((i * i) == n)
		{
			sq = i;
			break;
		}
		else
		{
			sq = -1;
		}
		i++;
	}
	return (sq);
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
		return (_sqrt(n));
	}
	return (_sqrt_recursion(n));
}

