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
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

