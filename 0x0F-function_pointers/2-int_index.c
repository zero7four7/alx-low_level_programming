#include "function_pointers.h"

/**
 * int_index - function find the index of a int
 *
 * @array: the array to find the index
 * @size: the size of the array
 * @cmp: this is a function pointer
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}

	return (-1);
}
