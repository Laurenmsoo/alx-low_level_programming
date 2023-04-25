#include "main.h"
/**
* _isalpha - checks for alphabetic character
* @c: c is  the letter  to be checked
* Return: 1 if c is a lowercase or uppercase letter
* return: 0 for otherwise
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
