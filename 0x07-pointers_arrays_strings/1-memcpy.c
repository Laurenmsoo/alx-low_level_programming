#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory address where data is currently
 * @src: memory address where data is copied
 * *@n: number of bytes
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;
	int i = n;

	for (x=0; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
