#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i;
	int len = 0;
	int mid;
	int temp;

	while (s[len] != '\0')
	{
		len++;
	}
	mid = len / 2;
	for (i = 0; i < mid; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
