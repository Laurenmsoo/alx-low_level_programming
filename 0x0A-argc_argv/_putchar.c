#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c:Ther character to print
 *
 * Return: 1 on success,
 * return:-1 in error and set the errorno.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
