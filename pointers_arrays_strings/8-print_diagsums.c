#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - This function prints the sum of the two diagonals
 *                  of a square matrix of integers
 *
 * @a: pointer to array
 * @size: size of array
 *
 */

void print_diagsums(int *a, int size)
{
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (j = 0; j < size * size; j += size + 1)
		sum1 = sum1 + a[j];

	for (j = size - 1; j <= (size * size) - size; j += size - 1)
		sum2 = sum2 + a[j];

	printf("%d, %d\n", sum1, sum2);
}
