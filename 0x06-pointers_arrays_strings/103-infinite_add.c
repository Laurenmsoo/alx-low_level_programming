/**
* infinite_add - adds 2 numbers
* @n1: number one
* @n2: number 2
* @r:  buffer that the function will use to store the result
* @size_r: buffer size
* Return: pointer to results
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{

int b = 0, i = 0, j = 0, numbs = 0;
int numb1 = 0, numb2 = 0, sum = 0;

while (*(n1 + i) != '\0')
i++;
while (*(n2 + j) != '\0')
j++;
i--;
j--;
if (j >= size_r || i >= size_r)
return (0);
while (j >= 0 || i >= 0 || b == 1)
{
if (i < 0)
numb1 = 0;
else
numb1 = *(n1 + i) -'0';
if (j < 0)
numb2 = 0;
else
numb2 = *(n2 + j) -'0';
sum = numb1 + numb2 + b;
if (sum >= 10)
b = 1;
else
b = 0;
if (numbs >= (size_r - 1))
return (0);
*(r + numbs) = (sum % 10) + '0';
numbs++;
j--;
i--;
}
if (numbs == size_r)
return (0);
*(r + numbs) = '\0';
rev_array(r);
return (r);
}
return (0);
}
