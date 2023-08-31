#include "main.h"

/**
 * clear_bit - sets the value of a bit at a give index to 0
 * @n: pointer of the bit to be changed
 * @index: index of the bit to set
 *
 * Return: 1 for success,
 * return: -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
