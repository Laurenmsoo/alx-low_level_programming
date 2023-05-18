#include <stdlib.h>
#include "main.h"
/**
* *string_nconcat - concatenates two strings
* @s1: input string
* @s2: input string
* @n: number of bytes from s2 to be concatenated
* Return: pointer t the new memory location
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i = 0, j = 0, slen1 = 0, slen2 = 0;

while (s1 && s1[slen1])
slen1++;
while (s2 && s2[slen2])
slen2++;
if (n < slen2)
str = malloc(sizeof(char) * (slen1 + n + 1));
else
str = malloc(sizeof(char) * (slen1 + slen2 + 1));
if (!str)
return (NULL);
while (i < slen1)
{
str[i] = s1[i];
i++;
}
while (n < slen2 && i < (slen1 + n))
str[i++] = s2[j++];
while (n >= slen2 && i < (slen1 + slen2))
str[i++] = s2[j++];
str[i] = '\0';
return (str);
}
