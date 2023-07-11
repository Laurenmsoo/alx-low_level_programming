#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to the newly allocated memory
 * @str: character pointer
 * Return: pointer to duplicated string
 * return: NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, x = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		ptr[x] = str[x];

	return (ptr);
}
