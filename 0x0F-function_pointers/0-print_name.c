#include "function_pointers.h"

/**
 * print_name: Function prints a name
 * @name: String to print
 * @f: Function pointer, that receives a string.
 *
 * Return: No return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
