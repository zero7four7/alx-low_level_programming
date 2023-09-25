#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the program
 * @argc: arguments cant
 * @argv: vector arguments
 * Return: 0 if false, something else otherwise.
 */

int main(int argc, char *argv[])
{
	int (*get)(int, int);
	int a, b, res;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = f(a, b);
	printf("%d\n", res);
	return (0);
}
