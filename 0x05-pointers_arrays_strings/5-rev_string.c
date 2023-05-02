#include "main.h"

/**
 * rev_string - a function thet reverses a string
 * @s: Input string
 * Return : reverse of the string
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int a = 0;
	int i;

	while (s[a] != '\0')
	a++;
	for (i = 0; i < a; i++)
	{
		a--;
		reverse = s[i];
		s[i] = s[a];
		s[a] = reverse;
	}
}
