#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: destination memory
 *@src: source memory
 *@n: memory size in bytes
 *
 *Return: copied memory with the changed bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;


	for (; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
