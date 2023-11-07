#include "main.h"
/**
 * print_array - prints n elements of an array followed by newline
 * @a: array of intergers
 * @n: number of ellements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
