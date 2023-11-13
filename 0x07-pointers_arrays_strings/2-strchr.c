#include "main.h"
/**
 * _strchr - finds first ocurrence of character in string
 * @s: string to check
 * @c: character to find
 * Return: on success,pointer to the first occurrence of the
 * character c in the string s
 * return: NULL if the character is not found
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
