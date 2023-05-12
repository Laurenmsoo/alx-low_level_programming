#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments recieved by the program
 * @argc: number of arguments
 * @argv: pointer to each parameter
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
