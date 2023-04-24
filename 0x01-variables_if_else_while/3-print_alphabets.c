#include <stdio.h>
/**
 * main - A program that prints lower case alphabets using putchar
 *
 * Return: 0  (Success)
 */
int main(void)
{
int x;
int y;

for (x = 97; x <= 122; x++)
{
putchar(x);
}
for (y = 65; y <= 90; y++)
{
putchar(y);
}
putchar ('\n');
return (0);
}
