#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input string
 * @accept: input string
 * Return: 0 for Success
 */
char *_strpbrk(char *s, char *accept)
{
	int n;


	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
		if (*s == accept[n])
		return (s);
		}
	s++;
	}


return ('\0');
}
