#include <stdio.h>
#include "main.h"

/**
 * main - prints the progam name
 * @argc: number of arguments
 * @argv: ponter arr pointing to each program parameters
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
