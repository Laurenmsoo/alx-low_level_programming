#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: string length
 */
int _strlen(char *s)
{
	int slen = 0;


	while (*s != '\0')
	{
		slen++;
		s++;
	}


	return (slen);
}
