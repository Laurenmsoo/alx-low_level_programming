#include "main.h"
/**
* print_alphabet_x10 - print alphabets in lowercase 10 times
*
*/
void print_alphabet_x10(void)
{
char x;
int i = 0;

while (i < 10)
{
x = 'a';
while (x  <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
i++;
}
}
