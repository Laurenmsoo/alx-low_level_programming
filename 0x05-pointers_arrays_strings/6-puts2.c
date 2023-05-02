#include "main.h"
/**
 * puts2 -  prints every other character of a string
 * starting with the first character
 * @str: input
 */
void puts2(char *str)
{
	int length = 0;
	int x = 0;
	char *a = str;
	int o;

	while (*a != '\0')
	{
		a++;
		length++;
	}
	x = length - 1;
	for (o = 0 ; o <= x ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
