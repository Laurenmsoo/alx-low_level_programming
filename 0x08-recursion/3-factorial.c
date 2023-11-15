#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: number to return the factorial
 *
 * Return: factorial of n for success,
 *return: -1 if it fails
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
