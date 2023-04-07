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
		n = n >> 1;
		i++;
	}
	return (-1);
}
