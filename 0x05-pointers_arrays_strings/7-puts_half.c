#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input
 */
void puts_half(char *str)
{
	int i, c, length;

	length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;

	c = (length / 2);

	if ((length % 2) == 1)
		c = ((length + 1) / 2);

	for (i = c; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

