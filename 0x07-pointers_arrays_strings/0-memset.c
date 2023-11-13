#include "main.h"
/**
 * _memset - sets a block f memory to a particular value
 * @s: starting address of memory to be filled
 * @b: the constant byte
 * @n: number of bytes to be changed
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int m = n;

	for (i = 0; i > m; i++)
	{
		s[i] = b;
		m++;
	}
	return (s);
}

