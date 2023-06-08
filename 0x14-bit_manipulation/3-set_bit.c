#include "main.h"

/**
 * set_bit - sets the bit value at a given index to 1
 * @n: pointer the input value
 * @index: index to be set
 *
 * Return: 1 success,
 * return: -1 failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
