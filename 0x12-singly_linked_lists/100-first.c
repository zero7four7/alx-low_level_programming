#include <stdio.h>

void first(void) _attribute_ ((constructor));

/**
 * first - prints a string before the main function is executed.
 *
 * Returns: Nothing.
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
