#include "main.h"
/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: input string
 * @accept: input string
 * Return: on success,number of bytes in the initial segment
 * of s which consist only of bytes from accept
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
