#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the min number of coins to
 * make change for an amount of money
 * @argc:  arguments count
 * @argv:  arguments array
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int x, i, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	result = 0;

	if (x < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && x >= 0; i++)
	{
		while (x >= coins[i])
		{
			result++;
			x -= coins[i];
		}
	}

	printf("%d\n", result);
	return (0);
}
