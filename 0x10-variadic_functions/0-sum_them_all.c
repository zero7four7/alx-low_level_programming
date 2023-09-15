#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - check code
 * @n: number of arguments
 * 
 * Return: 0 (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int summ = 0;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}

	va_end(valist);

	return (sum);
}
