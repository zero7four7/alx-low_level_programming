#include "main.h"

/**
 * _print_rev_rrecursion - print a string in reverse with recursion.
 * @s: String to print in reverse
 *
 * Return: 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
