#include "main.h"

/**
 * flip_bits - checks the number of bits to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = x >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
