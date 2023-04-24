#include <stdio.h>
/**
 * main - A program that prints possible combinations
 * of single-digits number using putchar
 * Return: 0  (Success)
 */
int main(void)
{
int x;

for (x = 48; x <= 57; x++)
{
putchar(x);
if (x == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar ('\n');
return (0);
}
