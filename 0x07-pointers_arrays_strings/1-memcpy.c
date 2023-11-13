#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory address to copy data to
 * @src: memory address where data is currently
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int m = n;

	for (i = 0; i < m; i++)
		dest[i] = src[i];
	return (dest);
}
