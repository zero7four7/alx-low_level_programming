#include "main.h"

/**
 * _isaplha - check if the given character is lower case
 * @C: character to test.
 *
 * Return: 1 (True) else 0 (Fals)
 */

int _isaplha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
