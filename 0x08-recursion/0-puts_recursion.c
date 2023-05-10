#include "main.h"
/**
* _puts_recursion - prints a string
 * @s: string input
 * Return: 0 Success
 */
void _puts_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
else
_putchar('\n');

}
