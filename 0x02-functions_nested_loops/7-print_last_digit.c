#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @number: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int number)
{
int last_digit;

if (number < 0)
number = -number;
last_digit = number % 10;
if (last_digit < 0)
last_digit = -last_digit;
_putchar(last_digit + '0');
return (last_digit);
}
