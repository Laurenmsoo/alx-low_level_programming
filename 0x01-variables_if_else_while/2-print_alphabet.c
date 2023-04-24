#include <stdio.h>
/**
 * main - A program that prints lower case alphabets using putchar
 *
 * Return: 0  (Success)
 */
int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
	putchar(x);
	}
	putchar ('\n');
	return (0);
}
