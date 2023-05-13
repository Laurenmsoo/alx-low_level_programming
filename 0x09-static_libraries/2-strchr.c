#include "main.h"
#include <stddef.h>

/**
 * _strchr - checks for first occurance of character c
 * @s: inp string
 * @c: character to be checed
 * Return: 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
