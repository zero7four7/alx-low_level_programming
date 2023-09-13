#include "3-calc.h"

/**
 * op_add - this function adds two numbers
 * @a:the first number
 * @b:the second number.
 * Return: Add result.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this function sub two numbers
 * @a:the first number
 * @b:the second number.
 * Return: Subtraction result.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - this function multiply two numbers
 * @a:the first number
 * @b:the second number.
 * Return: Multiplication result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this function divide two numbers
 * @a:the first number
 * @b:the second number.
 * Return: Divide result
 */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - this function calcualte the module
 * @a:the first number
 * @b:the second number.
 * Return: Module result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
