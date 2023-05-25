#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - Prints numbers
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list sums;
unsigned int i;

va_start(numbs, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(numbs, int));

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(numbs);
}
