#include "main.h"
/**
 * swap_int - a fnction that swaps the values of two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
