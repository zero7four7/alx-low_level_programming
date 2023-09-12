#include "main.h"
#include <stddef.h>

/**
 *_strchr - function that locates a character in a string
 *@s: the string to search in
 *@c: character to find
 *
 *Return: returns pointer to c position
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (; ; i++)
	{
		if (s[i] == c)
			return (&(s[i]));
		if (!s[i])
			return (NULL);

	}
}
