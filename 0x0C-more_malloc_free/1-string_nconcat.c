#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: input string
 * @s2: input string
 * @n: number of bytes from s2 to be concatenated to s1
 *
 * Return: pointer to the newly allocated memory on success
 * return: NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, strlen1 = 0, strlen2 = 0;

	while (s1 && s1[strlen1])
		strlen1++;
	while (s2 && s2[strlen2])
		strlen2++;

	if (n < strlen2)
		ptr = malloc(sizeof(char) * (strlen1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (strlen1 + strlen2 + 1));

	if (!ptr)
		return (NULL);

	while (i < strlen1)
	{
		ptr[i] = s1[i];
		i++;
	}

	while (n < strlen2 && i < (strlen1 + n))
		ptr[i++] = s2[j++];

	while (n >= strlen2 && i < (strlen1 + strlen2))
		ptr[i++] = s2[j++];

	ptr[i] = '\0';

	return (ptr);
}
