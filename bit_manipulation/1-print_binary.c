#include <stddef.h>
#include "main.h"

/**
 * print_binary - converts a decimal to a binary.
 * @n: the decimal to convert.
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		/* shift bits to the right and pass the result into recursive */
		print_binary(n >> 1);
	}
	/* print the least significant bit */
	_putchar('0' + (n & 1));
}
