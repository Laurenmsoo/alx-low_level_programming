#include "main.h"

/**
 * get_bit - returns the value of a bit at aa given
 * @n: number to be searched
 * @index: index of the bit to get
 *
 * Return: bit value at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
