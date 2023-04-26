#include <stdio.h>
/**
* main - finds and prints the first 98 Fibonacci numbers, starting with 1 and 2
*
* Return: 0 Success
*/
int main(void)
{
unsigned long int i;
unsigned long int numb = 1;
unsigned long int add = 2;
unsigned long int l = 1000000000;
unsigned long int numb1;
unsigned long int numb2;
unsigned long int add1;
unsigned long int add2;
printf("%lu", numb);
for (i = 1; i < 91; i++)
{
printf(", %lu", add);
add += numb;
numb = add - numb;
}
numb1 = (numb / l);
numb2 = (numb % l);
add1 = (add / l);
add2 = (add % l);
for (i = 92; i < 99; ++i)
{
printf(", %lu", add1 + (add2 / l));
printf("%lu", add2 % l);
add1 = add1 + numb1;
numb1 = add1 - numb1;
add2 = add2 + numb2;
numb2 = add2 - numb2;
}
printf("\n");
return (0);
}
