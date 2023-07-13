#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * return: -1 on error and set the errorno appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
