#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: points to the string to be converted
 *
 * Return: the converted number
 * return:0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal= 2 * decimal + (b[i] - '0');
	}

	return (decimal);
}

