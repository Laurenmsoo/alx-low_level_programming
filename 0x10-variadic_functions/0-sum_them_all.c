#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its paramters.
 * @n: The number of paramters passed.
 * @...: variable number of parameters to calculate the sum.
 *
 * Return: 0 if n == 0
 * return: the sum of the parameters otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, sum = 0;

	va_start(a, n);

	for (i = 0; i < n; i++)
		sum += va_arg(a, int);

	va_end(a);

	return (sum);
}
