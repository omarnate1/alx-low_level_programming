#include "main.h"

/**
 * print_array - function that prints 'n' elements of an erray of inteers
 * @a: array of integers
 * @n: number of elements to be displayed
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
