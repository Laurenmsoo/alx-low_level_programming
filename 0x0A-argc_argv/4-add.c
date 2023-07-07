#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - checks if there is number in the string
 * @s: string array
 *
 * Return: 0 in success
 */
int check_num(char *s)
{
	unsigned int count;

	count = 0;
	while (count < strlen(s))

	{
		if (!isdigit(s[count]))
		{

			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - prints prog name
 * @argc: Count arguments
 * @argv: Arguments vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])

{

	int count;
	int string_to_int;
	int add = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))

		{
			string_to_int = atoi(argv[count]);
			add += string_to_int;
		}

				else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", add);

	return (0);
}
