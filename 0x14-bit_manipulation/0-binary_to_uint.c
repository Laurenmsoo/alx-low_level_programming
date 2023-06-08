#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: points to a string of 0 and 1
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimalnum = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimalnum = 2 * decimalnum + (b[i] - '0');
	}

	return (decimalnum);
}
