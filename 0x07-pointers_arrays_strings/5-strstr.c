#include "main.h"
/**
 * _strstr - finds first occurence of substring
 * @haystack: input string
 * @needle: substring
 * Return:0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *poin = needle;

		while (*p == *poin && *poin != '\0')
		{
			p++;
			poin++;
		}

		if (*poin == '\0')
			return (haystack);
	}
	return (0);
}
