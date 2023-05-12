#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed to it
 * @argc: number of arguments
 * @argv: array pointer to passed arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
