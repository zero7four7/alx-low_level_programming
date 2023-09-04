#include "main.h"

/**
 * print_most_numbers - print 0 to 9 except 2 and 4
 *
 * Return: Always 0.
 */

void print_most_number(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num != 2 && num != 4)
			_putchar('0' + num);
		num++;
	}

	_putchar('\n');
}
