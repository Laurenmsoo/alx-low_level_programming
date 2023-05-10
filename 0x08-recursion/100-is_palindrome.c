#include "main.h"

int check_palidrome(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string
 *
 * Return: 0 if palidrome
*return 1 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - recurses to check if number is a palindrome
 * @s:input string
 * @i:counter
 * @slen: length of the string
 *
 * Return: 1 if palindrome,
*return :0 otherwise
 */
int check_palindrome(char *s, int i, int slen)
{
	if (*(s + i) != *(s + slen - 1))
		return (0);
	if (i >= slen)
		return (1);
	return (check_palindrome(s, i + 1, slen - 1));
}
