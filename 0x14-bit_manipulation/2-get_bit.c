#include "main.h"

/**
 * get_bit -returnd the bit value at a given index
 * @n: number in search
 * @index: bit index
 *
 * Return: bit value at the index
 * return: -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bvalue;

	if (index > 63)
		return (-1);

	bvalue = (n >> index) & 1;

	return (bvalue);
}
