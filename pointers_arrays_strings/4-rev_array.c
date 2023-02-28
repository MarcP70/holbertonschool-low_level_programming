#include "main.h"

/**
 * reverse_array - This reverses the content of an array of integers
 *
 * @a: the pointer of array
 * @n: the sizeof of array
 *
 */

void reverse_array(int *a, int n)
{
	int index = 0;
	int tmp;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = tmp;
	}
}
