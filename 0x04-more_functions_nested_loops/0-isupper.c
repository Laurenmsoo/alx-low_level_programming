#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * @c: char to be checked
 * Return: 0 for uppercase
 * return 1 for otherwise
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
