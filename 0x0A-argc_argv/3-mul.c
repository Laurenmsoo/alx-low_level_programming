#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string to convert
 *
 * Return: converted int
 */
int _atoi(char *s)
{
	int i = 0, x = 0, n = 0, slen = 0, z =  0, num = 0;

	while (s[slen] != '\0')
		slen++;

	while (i < slen && z == 0)
	{
		if (s[i] == '-')
			++x;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (x % 2)
				num = -num;
			n = n * 10 + num;
			z = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			z = 0;
		}
		i++;
	}

	if (z == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, a, b;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);

	return (0);
}
