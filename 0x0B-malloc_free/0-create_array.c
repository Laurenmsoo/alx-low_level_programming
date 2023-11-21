#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array and initialize it with a specific charecter
 * @size: array size
 * @c: char to be assigned
 * Description: create array of size size and initialize char c
 * Return: pointer to array,
 *return: NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
