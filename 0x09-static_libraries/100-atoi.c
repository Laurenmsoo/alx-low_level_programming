#include "main.h"
/**
 * _atoi - convert a string into its corresponding integer.
 *
 * @s: string to be converted
 *
 * Return: corresponding intger
 */
int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int r = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		r = (r * 10) + (s[i] - '0');
		i++;
	}
	r *= sign;
	return (r);
}
