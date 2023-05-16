#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup -  copies string to new memory space location
* @str: char input
* Return: pointer t the new memory,
*return NULL if it fails
*/
char *_strdup(char *str)
{
char *ch;
int i, x = 0;

if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
ch = malloc(sizeof(char) * (i + 1));
if (ch == NULL)
return (NULL);
for (x = 0; str[r]; x++)
ch[x] = str[x];
return (ch);
}
