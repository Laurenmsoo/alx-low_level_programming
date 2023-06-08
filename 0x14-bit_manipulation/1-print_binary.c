#include "main.h"

/**
 * print_binary - prints the representation of the number in binary
 * @n: number t be printed in the binary form
 */
void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned long int d;

	for (i = 63; i >= 0; i--)
	{
		d = n >> i;

		if (d & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
