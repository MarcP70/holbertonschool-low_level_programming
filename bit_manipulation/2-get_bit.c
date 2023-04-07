#include <stddef.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the decimal to check.
 * @index: the index of the bit to return.
 *
 * Return: the bit at the index mentionned.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (n > 0)
	{
		if (index == i)
			return (n & 1);
		/* shift right = rest(n/2^1) */
		n = n >> 1;
		i++;
	}
	/* unsigned long int = 32 bits max */
	if (index < 32)
		return (0);
	else
		return (-1);
}
