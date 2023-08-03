_putchar.c

#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints the character c to stdout
 * @c: character to be printed
 *
 * Return: 1 on success.
 * return: -1 on error and set the error no. appropriatelly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
