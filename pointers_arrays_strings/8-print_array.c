#include <stdio.h>
#include "main.h"

/**
 * print_array - This function prints n elements of an array of integers
 *
 * @a: array name
 * @n: lenght of array
 *
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != n - 1)
			printf(", ");
	}
	printf("\n");
}
