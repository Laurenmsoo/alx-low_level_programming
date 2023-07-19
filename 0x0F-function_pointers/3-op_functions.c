#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of a and b.
 * @a: first number.
 * @b: second number.
 *
 * Return: teh result of sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference between a and b.
 * @a: first number.
 * @b: second number.
 *
 * Return: the difference of the two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the pruduct of a and b.
 * @a: first number.
 * @b: second number.
 *
 * Return: the products of the 2 numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the result of dividing a and b.
 * @a: first number.
 * @b: second number.
 *
 * Return: quotient of the 2 numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder of division of a and b
 * @a: first number.
 * @b: second number.
 *
 * Return: remainder of division of the 2 numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
