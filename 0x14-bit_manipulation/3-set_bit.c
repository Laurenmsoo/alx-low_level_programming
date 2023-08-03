#include "main.h"

/**
 * set_bit - sets a bit to 1 at a given index
 * @n: number to be changed
 * @index: index of the bit to be set
 *
 * Return: 1 for success,
 * return: -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
