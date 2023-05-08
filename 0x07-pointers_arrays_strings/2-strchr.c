#include "main.h"
/**
 * _strchr - finds first ocurrence of character in string
 * @s: string input
 * @c: string input
 * Return: 0 Success
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
