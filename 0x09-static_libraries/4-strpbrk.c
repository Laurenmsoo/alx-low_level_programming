#include "main.h"
/**
 * _strpbrk - finds first occurance
 * of substring in a string
 * @s: input string
 * @accept: input value
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
	s++;
	}

return ('\0');
}
