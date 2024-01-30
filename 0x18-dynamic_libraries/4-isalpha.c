#include "main.h"

/**
 * _isalpha - checks if c is an alphabetic character
 * @c: the character to check
 * Return: 1 if c is a letter,
*return:  0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
