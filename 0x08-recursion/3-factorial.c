/**
 * factorial - This program returns the factorial of the integer passed to n.
 * @n: integer n.
 *
 * Return: -1 or factorial.
 */

int factorial(int n)
{
	if (n <= 0)
	{
		if (n == 0)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	return (n * factorial(n - 1));
}
