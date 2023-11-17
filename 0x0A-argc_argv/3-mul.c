#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the multiplication of two numbers.
 * @argc: arguments count
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 If the program receives two arguments.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num2 = atoi(argv[2]);
	num1 = atoi(argv[1]);
	printf("%d\n", num1 * num2);
	return (0);
}
