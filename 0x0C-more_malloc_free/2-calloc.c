#include <stdlib.h>
#include "main.h"
/**
 * *_memfill - fills memory with a constant byte b
 * @s: memory block to be filled
 * @b: input character
 * @n: number of times b will be copied
 * Return: pointer to memory filled
 */
char *_memfil(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
/**
* *_calloc - allocates memory for an array
* @nmemb: number of elements in the array
* @size: element size
* Return: pointer to the new memory location
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, nmemb * size);
return (ptr);
}
