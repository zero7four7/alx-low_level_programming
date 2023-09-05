#include "main.h"

/**
 * swap_int - swap the value of a and b.
 * @a : input 1
 * @b : input 2
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
