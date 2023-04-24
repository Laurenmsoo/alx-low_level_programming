#include <stdio.h>
/**
 * main - A program that prints possible combinations of
 * two digits using putchar
 *
 * Return: 0  (Success)
 */
int main(void)
{
int i;
int j;

for (i = 48; i < 57; i++)
{
for (j = i + 1; j <= 57; j++)
{
if (j != i)
{
putchar(i);
putchar(j);
if (i == 56 && j == 57)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar ('\n');
return (0);
}
