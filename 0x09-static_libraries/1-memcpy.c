#include "main.h"
/**
 *_memcpy - copies the memory area
 *@dest: memory is stored
 *@src: memory where it is copied
 *@n: memory size in bytes
 *
 *Return: copied memory and size in bytes
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
