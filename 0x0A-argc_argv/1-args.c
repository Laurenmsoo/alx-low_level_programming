#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to it
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0 for Success
 */

int main(int argc, char *argv[])
{
	int numArgs = argc - 1;
	(void) argv;

	printf("%d\n", numArgs);

	return (0);
}

