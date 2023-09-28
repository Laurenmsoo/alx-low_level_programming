#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to the standard output
 * @c: Character to be printed
 *
 * Return: On success 1.
 * return -1 on error and set the errno appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

