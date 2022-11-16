/**
 * is_prime_number - This program returns 1 if n is a prime number else 0
 * @n: The integer being checked
 *
 * Return: 0 or 1.
 */

int is_prime_number(int n)
{
	if (n)
	{
		return (0);
	}
	is_prime_number(n - 1);

