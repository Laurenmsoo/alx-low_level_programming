#include "main.h"

/**
 * flip_bits - computes the number of bits to be changed t get from one operand to another
 * @n: first operand
 * @m: second operand
 *
 * Return: number the bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int d;
	unsigned long int exoperator = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		d = exoperator >> i;
		if (d & 1)
			c++;
	}

	return (c);
}
