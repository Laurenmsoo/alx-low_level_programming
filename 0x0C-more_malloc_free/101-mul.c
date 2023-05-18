#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
* is_digit - checks for non-digit character
* @s: string input
* Return: 0 if a non-digit is found
*return 1 otherwise
*/
int is_digit(char *s)
{
int i = 0;

while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}

/**
* _strlen - returns the length of a string
* @s: string input
* Return:  length of the string
*/
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
* errors - handles errors for main
*/
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
* main - multiplies two positive numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: always 0 (Success)
*/
int main(int argc, char *argv[])
{
char *s1, *s2;
int slen1, slen2, slen, i, c, digit1, digit2, *result, x = 0;

s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
slen1 = _strlen(s1);
slen2 = _strlen(s2);
slen = slen1 + slen2 + 1;
result = malloc(sizeof(int) * slen);
if (!result)
return (1);
for (i = 0; i <= slen1 + slen2; i++)
result[i] = 0;
for (slen1 = slen1 - 1; slen1 >= 0; slen1--)
{
digit1 = s1[slen1] - '0';
c = 0;
for (slen2 = _strlen(s2) - 1; slen2 >= 0; slen2--)
{
digit2 = s2[slen2] - '0';
c += result[slen1 + slen2 + 1] + (digit1 *digit2);
result[slen1 + slen2 + 1] = c % 10;
c /= 10;
}
if (c > 0)
result[slen1 + slen2 + 1] += c;
}
for (i = 0; i < slen - 1; i++)
{
if (result[i])
x = 1;
if (x)
_putchar(result[i] + '0');
}
if (!x)
_putchar('0');
_putchar('\n');
free(result);
return (0);
}

