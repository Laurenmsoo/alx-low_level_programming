#include "main.h"

int calc_prime(int n, int i);

/**
 * is_prime_number - checs if number is prime or not
 * @n: input value
 *
 * Return: 1 if n is a prime number,
 * return  otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (calc_prime(n, n - 1));
}

/**
 * calc_prime - recurses to see is number is prime
 * @n: nuber to be computed
 * @i:counter
 *
 * Return: 1 if n is prime,
 * return  0 therwise
 */
int calc_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (calc_prime(n, i - 1));
}
