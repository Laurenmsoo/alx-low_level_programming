#include "main.h"
/**
 * print_rev - prints the string in reverse
 * @s: string to print in reverse
 */
void print_rev(char *s)
{
	int slen = 0;
	int i;
	char *end = s;

	while (*end != '\0')
	{
		slen++;
		end++;
	}
	for (i = slen - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
