#include "main.h"
/**
 * _strstr - finds first occurence of substring
 * @haystack: input string
 * @needle: substring
 * Return: pointer to the beginning of the substring on success
 * return: NULL on failure
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
