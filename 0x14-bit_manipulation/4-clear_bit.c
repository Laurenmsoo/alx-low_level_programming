#include "main.h"

/**
 * clear_bit - sets the the bit value to 0 at a given index
 * @n: pointer to the number to be changed
 * @index: index f the bit to set
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
