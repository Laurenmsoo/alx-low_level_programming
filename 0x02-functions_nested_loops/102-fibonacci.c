#include <stdio.h>
/**
* main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
*
* Return: 0 sucess.
*/
int main(void)
{
int i;
unsigned long numb1 = 0, numb2 = 1, sum;

for (i = 0; i < 50; i++)
{
sum = numb1 + numb2;
printf("%lu", sum);
numb1 = numb2;
numb2 = sum;
if (i == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
