#include "main.h"

/**
 * get_bit - returns the value of a bit at an index
 * @n: the number to be searched
 * @index: ithe bit index
 *
 * Return: bit value on success,
 * return -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
