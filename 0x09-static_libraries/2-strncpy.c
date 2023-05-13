#include "main.h"
/**
 * _strncpy - copy upt n characters of a string
 * @dest: memory to be copied to
 * @src: input string
 * @n: number of characters
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

