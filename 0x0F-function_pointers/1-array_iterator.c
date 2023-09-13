#include "function_pointers.h"
/**
 * array_iterator - function iterates an array
 *
 * @array: array to iterate
 * @size: size of array
 * @action: function pointer
 *
 * Return: void function no return.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(*(array + i));
	}
}
