#include "main.h"
#include <stdlib.h>
/**
* str_concat - cancatenate 2 strings and returns the pointer to the *new string
* @s1: string 1
* @s2: string 2
* Return: pointer to the newly allocated memory
*return NULL if it fails
*/
char *str_concat(char *s1, char *s2)
{
char *sconct;
int i, n;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = n = 0;
while (s1[i] != '\0')
i++;
while (s2[n] != '\0')
n++;
sconct = malloc(sizeof(char) * (i + n + 1));
if (sconct == NULL)
return (NULL);
i = n = 0;
while (s1[i] != '\0')
{
sconct[i] = s1[i];
i++;
}
while (s2[n] != '\0')
{
sconct[i] = s2[n];
i++, n++;
}
sconct[i] = '\0';
return (sconct);
}
