#include <stddef.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to
 *             get from one number to another.
 * @n: the fist decimal to be checked.
 * @m: the second decimal to be checked.
 *
 * Return: the number of bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result)
	{
		count = count + (xor_result & 1);
		/* xor_result = xor_result / 2^1 */
		xor_result = xor_result >> 1;
	}

	return (count);
}
