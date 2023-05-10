#include "main.h"

/**
 * _pow_recursion - prints x raised to the power of y
 * @y: power integer
 * @x:the base integer
 *
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}

