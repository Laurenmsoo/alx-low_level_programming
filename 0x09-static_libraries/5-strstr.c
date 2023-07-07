#include "main.h"
/**
 * _strstr - finds needle in haystack
 * @haystack: input
 * @needle: string to be searched
 * Return: 0 for Success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;


		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}


		if (*p == '\0')
			return (haystack);
	}


	return (0);
}
