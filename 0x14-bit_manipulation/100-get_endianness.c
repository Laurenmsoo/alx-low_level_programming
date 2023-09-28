#include "main.h"

/**
 * get_endianness - checksendianness
 * Return: 0 for big endian,
 * return: 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

