#include "main.h"

/**
 * get_endianness - checks the machine endianness
 * Return: 0 if big,
 * return 1 for little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *p = (char *) &i;

	return (*p);
}
