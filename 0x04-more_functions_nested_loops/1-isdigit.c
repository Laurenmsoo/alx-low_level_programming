#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: letter to be checked
 * Return: 0 if c is digit
 * return: 1 for otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
