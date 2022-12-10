#include<math.h>

/**
 * _sqrt - This function finds the sqrt of the argument n
 * @n: The squre of n
 *
 * Return: sq
 */

int _sqrt(int n)
{
	int sq = sqrt(n);
	if ((sq * sq) == n)
	{
		return (sq);
	}
	else
	{
		return (-1);
	}
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

