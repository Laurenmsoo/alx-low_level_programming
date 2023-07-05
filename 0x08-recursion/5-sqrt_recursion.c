#include "main.h"

int recurse_sqrt_recursion(int num, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose square root to be calculated
 *
 * Return: square root of n on success,
 *return: -1 if it fails
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (recurse_sqrt_recursion(n, 0));
}

/**
 * recurse_sqrt_recursion - finds the nutural square root
 * by recursion
 * @n: umber whose square root is to be calculated
 * @i: iterator
 *
 * Return: the value of the square root
 */
int recurse_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (recurse_sqrt_recursion(n, i + 1));
}
