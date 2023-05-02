#include "main.h"
/**
 * print_rev - prints string in reverse
 * @stri: string to be printed
 * return: 0
 */
void print_rev(char *stri)
{
	int longi = 0;
	int i;

	while (*stri != '\0')
	{
		length++;
		stri++;
	}
	stri--;
	for (i = length; i > 0; i--)
	{
		_putchar(*stri);
		stri--;
	}

	_putchar('\n');
}
