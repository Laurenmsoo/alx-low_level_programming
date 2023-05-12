#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_digit - checks the string for digits
 * @s: string array
 *
 * Return: Always 0 (Success)
 */
int check_digit(char *s)
{

	unsigned int i;

	i = 0;
	while (i < strlen(s))
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}

		i++;
	}
	return (1);
}

/**
 * main - Prints its name
 * @argc:  arguments
 * @argv: pinter to arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int i;
	int str_to_int;
	int sum = 0;

	i = 1;
	while (i < argc)
	{
		if (check_digit(argv[i]))

		{
			str_to_int = atoi(argv[i]);
			sum += str_to_int;
		}

				else
		{
			printf("Error\n");
			return (1);
		}

		i++;
	}

	printf("%d\n", sum);

	return (0);
}
