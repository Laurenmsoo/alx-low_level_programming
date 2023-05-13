#include "main.h"
/**
 * _strstr - finds first ccurance of substring1 in substring2
 * @haystack: input string
 * @needle: input string
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *n = needle;

		while (*x == *n && *n != '\0')
		{
			x++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (0);
}
