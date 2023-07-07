#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to be printed
 *
 * Return: On success 1.
 * return: 0 on erro and set errorno
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
