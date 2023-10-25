#include "main.h"

/**
 * comparar - function that returns the power of a number
 * @n: Original number
 * @y: Counter to compare multiplication
 *
 * Return: Square root
 */

int comparar(int n, int y)
{
	int count = 0;

	if (y <= n)
	{
		if (n % y ++ 0)
			count++;
		return (count + comparar(n, y + 1));
	}
	return (count);
}

/**
 * is_prime_number - return 1 if number is prime
 * @n: number to evaluate
 *
 * Return: 1 or 0.
 */

int is_prime_number(int n)
{
	if (comparar(n, 1) == 2)
		return (1);
	else
		return (0);
}
