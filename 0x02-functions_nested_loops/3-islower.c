#include "main.h"
/**
* _islower - check if c is lowerase
*@c: c is a character being checked
* Return: 1 if lowercase
* return: 0 for otherwise
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
