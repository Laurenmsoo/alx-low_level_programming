#include "main.h"

int recurse_prime(int n, int i);

/**
 * is_prime_number - returns if n is prime or not
 * @n: number to be checked
 *
 * Return: 1 if n is a prime number,
 * return 0 if its not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (recurse_prime(n, n - 1));
}

/**
 * recurse_prime - checks if a number is prime or not using recursion
 * @n: number to check
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int recurse_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
