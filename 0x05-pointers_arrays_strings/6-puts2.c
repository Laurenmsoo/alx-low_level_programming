#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string input
 */
void puts2(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return;
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
		if (str[i] == '\0')
		{
			break;
		}
	}
	_putchar('\n');
}

