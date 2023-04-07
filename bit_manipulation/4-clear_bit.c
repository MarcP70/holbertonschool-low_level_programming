#include <stddef.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the decimal to be subtracted.
 * @index: the index of the bit to change.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 32)
	{
		/* 1 << index = 1 x 2^index */
		if (*n > 0)
			*n = *n - (1 << index);
		else
			return (0);
		return (1);
	}
	return (-1);
}
