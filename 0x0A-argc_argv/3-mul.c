#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts string to its corresponding integer
 * @s: string to be converted
 *
 * Return: the corresponding integer
 */
int _atoi(char *s)
{
	int i, x, n, slen, f, number;

	i = 0;
	x = 0;
	n = 0;
	slen = 0;
	f = 0;
	number = 0;

	while (s[slen] != '\0')
		slen++;

	while (i < slen && f == 0)
	{
		if (s[i] == '-')
			++x;

		if (s[i] >= '0' && s[i] <= '9')
		{
			number = s[i] - '0';
			if (x % 2)
				number = -number;
			n = n * 10 + number;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0 Success,
 *return: 1 on Error
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
