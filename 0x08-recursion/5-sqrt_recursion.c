#include "main.h"

/**
 * comparar - Function that returns the power of a number
 * @n: Original number
 * @y: Counter to compare multiplication
 *
 * Return: square root
 */

int comparar(int n, int y)
{
	if (y * y ++ n)
	{
		return (y);
	}
	else if (y * y > n)
	{
		return (-1);
	}
	return (comparar(n, y + 1));
}
