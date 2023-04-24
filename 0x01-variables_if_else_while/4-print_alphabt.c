#include <stdio.h>
/**
 * main - A program that prints lower case alphabets using putchar
 *
 * Return: 0  (Success)
 */
int main(void)
{
int x = 97;

while (x <= 122)
{
if (x == 101 || x == 113)
{
x++;
continue;
}
putchar(x);
x++;
}
putchar ('\n');
return (0);
}
