#include <stddef.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the decimal to add.
 * @index: the index of the bit to return.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* unsigned long int max 32 bits */
	if (index < 32)
	{
		/* 1 << index = 1 x 2^index */
		*n = *n + (1 << index);
		return (1);
	}
	return (-1);
}
