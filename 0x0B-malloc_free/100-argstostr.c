#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all program arguments
 * @ac: integer input
 * @av: double pointer array
 * Return: pointer to new string on success
 * return: NULL if ac is 0 or av is NULL
 */
char *argstostr(int ac, char **av)
{
	int i, n, x = 0, l = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	ptr = malloc(sizeof(char) * l + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		ptr[x] = av[i][n];
		x++;
	}
	if (ptr[x] == '\0')
	{
		ptr[x++] = '\n';
	}
	}
	return (ptr);
}
