#include "main.h"
#include <unistd.h>

/**
* _putchar - prints character c to stdout
* @c: The character to print
* Return: 1 on success
* return: -1 on error and set the errono appropriately
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
