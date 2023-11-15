#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: string pointer.
 *
 * Return: string length.
 */
int _strlen_recursion(char *s)
{
	int slen = 0;

	if (*s)
	{
		slen++;
		slen += _strlen_recursion(s + 1);
	}

	return (slen);
}
