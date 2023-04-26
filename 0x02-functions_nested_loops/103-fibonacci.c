#include <stdio.h>
/**
* main - generates Fibonacci sequence
*
* Return: 0 Success
*/
int main(void)
{
int i;
unsigned long int numb1, numb2, add, sum;
numb1 = 1;
numb2 = 2;
sum = 0;

for (i = 1; i <= 33; ++i)
{
if (numb1 < 4000000 && (numb1 % 2) == 0)
{
sum = sum + numb1;
}
add = numb1 + numb2;
numb1 = numb2;
numb2 = add;
}
printf("%lu\n", sum);
return (0);
}
