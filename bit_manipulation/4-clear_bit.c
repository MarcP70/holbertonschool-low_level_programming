#include <stddef.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the decimal to be subtracted.
 * @index: the index of the bit to change.
 * 1UL: cast the expression "1" to a long unsigned int
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* long int = 8 * 4 bits = 32 bits */
	if (index < 32)
	{
		/* check power < *n */
		if ((1UL << index) <= *n)
		{
			if (*n > 0)
			{
				/* 1 << index = 1 x 2^index */
				*n = *n - (1UL << index);
			}
			else
				return (0);
		}
		return (1);
	}
	return (-1);
}
