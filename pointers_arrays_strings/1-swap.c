#include "main.h"

/**
 * swap_int - This function that swaps the values of two integers
 *
 * @a: pointer of integer a
 * @b: pointer of integer b
 *
 */

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *b;
	*b =  *a;
	*a = temp;
}
