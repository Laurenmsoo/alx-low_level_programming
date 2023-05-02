#include "main.h"
/**
 * _strlen - returns the length of a string
 * @stri: string
 * Return: length
 */
int _strlen(char *stri)
{
	int length = 0;

	while (*stri != '\0')
	{
		length++;
		stri++;
	}

	return (length);
}
