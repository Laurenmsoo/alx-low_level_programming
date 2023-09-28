#include "main.h"

/**
 * get_bit - returns the value of a bit at an index
 * @n: pointer to the number
 * @index: iindex of the bit to get
 *
 * Return: bit value
 * return: -1, incase of erro
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}

