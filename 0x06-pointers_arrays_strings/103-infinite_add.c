#include "main.h"
#include <stdio.h>
/**
* infinite_add - adds two numbers
* @n1: first number
* @n2: second number
* @r: buffer that the function will use to store the result.
* @size_r: buffer size:
* Return: 0 success
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int x1 = 0, x2 = 0, rvs, b, y1, y2, sum = 0;

while (*(n1 + x1) != '\0')
x1++;
while (*(n2 + x2) != '\0')
x2++;
if (x1 >= x2)
b = x1;
else
b = x2;
if (size_r <= b + 1)
return (0);
r[b + 1] = '\0';
x1--, x2--, size_r--;
y1 = *(n1 + x1) -48;
y2 = *(n2 + x2) -48;
while (b >= 0)
{
rvs = y1 + y2 + sum;
if (rvs >= 10)
sum = rvs / 10;
else
sum = 0;
if (rvs > 0)
*(r + b) = (rvs % 10) + 48;
else
*(r + b) = '0';
if (x1 > 0)
x1--, y1 = *(n1 + x1) -48;
else
y1 = 0;
if (x2 > 0)
x2--, y2 = *(n2 + x2) -48;
else
y2 = 0;
b--, size_r--;
}
if (*(r) == '0')
return (r + 1);
else
return (r);
}
