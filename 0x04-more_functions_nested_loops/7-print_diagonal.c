#include "main.h"

/**
 * print_diagonal - function drwas a diagonal line on the terminal.
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int so, vp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (so = 1; so <= n; so++)
		{
			for (vp = 1; vp < so; vp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
