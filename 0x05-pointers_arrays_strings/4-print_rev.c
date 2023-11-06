#include "main.h"
/**
 * print_rev - prints the string in reverse
 * @s: string to print in reverse
 */
void print_rev(char *s)
{
	int slen, i;

	slen = strlen(s);
	for (i = slen - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
