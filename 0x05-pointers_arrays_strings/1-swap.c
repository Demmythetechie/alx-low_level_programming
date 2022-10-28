/**
 * swap_int - swap the value of the integer in the main() function
 * @a: First integer
 * @b: Second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int p_a = 0 + *a;
	*a = *b;
	*b = p_a;
}
