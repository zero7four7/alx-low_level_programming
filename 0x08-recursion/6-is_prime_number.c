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
