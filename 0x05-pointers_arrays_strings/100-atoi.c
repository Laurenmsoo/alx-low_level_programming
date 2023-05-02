#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: 0 sccess
 */
int _atoi(char *s)
{
	int i, x, n, length, y, numb;

	i = 0;
	x = 0;
	n = 0;
	length = 0;
	y = 0;
	numb = 0;

	while (s[length = '\0')
		length

	while (i < length y == 0)
	{
		if (s[i] == '-')
			++x;

		if (s[i] >= '0' && s[i] <= '9')
		{
			numb  = s[i] - '0';
			if (d % 2)
				numb  = -numb;
			n = n * 10 + dumb;
			y = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			y = 0;
		}
		i++;
	}

	if (y == 0)
		return (0);

	return (n);
}

