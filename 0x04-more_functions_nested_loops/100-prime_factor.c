#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0 Success
 */
int main(void)
{
long int x;
long int largest;
long int i;

x = 612852475143;
largest = -1;
while (x % 2 == 0)
{
largest = 2;
x /= 2;
}
for (i = 3; i <= sqrt(x); i = i + 2)
{
while (x % i == 0)
{
largest  = i;
x = x / i;
}
}
if (x > 2)
largest = x;
printf("%ld\n", largest);
return (0);
}
