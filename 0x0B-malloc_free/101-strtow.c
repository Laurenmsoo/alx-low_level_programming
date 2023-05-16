#include <stdlib.h>
#include "main.h"
/**
* numb_word - helps count the number of words in a string
* @s: input string
* Return: number of words
*/
int numb_word(char *s)
{
int prt, count, word;
prt = 0;
word = 0;

for (count = 0; s[count] != '\0'; count++)
{
if (s[count] == ' ')
prt = 0;
else if (prt == 0)
{
prt = 1;
word++;
}
}
return (word);
}
/**
* **strtow - splits a string into words
* @str: input string
* Return: pointer to an array of strings
*return NULL or err of it fails
*/
char **strtow(char *str)
{
char **gr, *t;
int i, k = 0, slen = 0, words, count = 0, strt, end;

while (*(str + slen))
slen++;
words = numb_word(str);
if (words == 0)
return (NULL);
gr = (char **) malloc(sizeof(char *) * (words + 1));
if (gr == NULL)
return (NULL);
for (i = 0; i <= slen; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (count)
{
end = i;
t = (char *) malloc(sizeof(char) * (count + 1));
if (t == NULL)
return (NULL);
while (strt < end)
*t++ = str[strt++];
*t = '\0';
gr[k] = t - count;
k++;
count = 0;
}
}
else if (count++ == 0)
strt = i;
}
gr[k] = NULL;
return (gr);
}
