#include "main.h"

/**
 * _atoi - convert a string into an integer
 *
 * @s: tinput string
 *
 * Return: integer
 */

int _atoi(char *s)
{
int n = 1, i = 0;
unsigned int r = 0;

while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
{
if (s[i] == '-')
n *= -1;
i++;
}
while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
{
r = (r * 10) + (s[i] - '0');
i++;
}
r *= n;
return (r);
}
