#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints char to standard output
 * @c: char to be printed
 *
 * Return: 1 on success.
 * return:-1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
