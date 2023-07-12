#include <stdlib.h>
#include "main.h"

/**
 * word_numb - checks number of words in a string
 * @s: string to be evaluated
 *
 * Return: number of words
 *return: NULL if it fails
 */
int word_numb(char *s)
{
	int f, c, wrds;

	f = 0;
	wrds = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			wrds++;
		}
	}

	return (wrds);
}
/**
 * **strtow - splits a string into words
 * @str: string to be splited
 *
 * Return: pointer to an array of strings on success
 * return: NULL if it fails
 */
char **strtow(char *str)
{
	char **m, *t;
	int i, k = 0, strlen = 0, words, c = 0, start, end;

	while (*(str + strlen))
		strlen++;
	words = word_numb(str);
	if (words == 0)
		return (NULL);

	m = (char **) malloc(sizeof(char *) * (words + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; i <= strlen; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				t = (char *) malloc(sizeof(char) * (c + 1));
				if (t == NULL)
					return (NULL);
				while (start < end)
					*t++ = str[start++];
				*t = '\0';
				m[k] = t - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	m[k] = NULL;

	return (m);
}
