#include "main.h"

/**
 * _isupper - checs for uppercase letters
 * @c: character to be checed
 *
 * Return: 0 for uppercase
 * return 1 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
