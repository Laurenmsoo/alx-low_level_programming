#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a  buffer
 * @b: buffer
 * @size: size of the buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int j;
	int i;
	int result = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (result < size)
	{
		j = size - result < 10 ? size - result : 10;
		printf("%08x: ", result);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + result + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + result + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		result += 10;
	}
}
