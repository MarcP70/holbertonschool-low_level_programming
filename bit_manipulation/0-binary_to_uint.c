#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1.
 * b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int power = 0;
	int index = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
		index++;
	}
	index = index - 1;

	while (index >= 0)
	{
		if (b[index] != '1' && b[index] != '0')
			return (0);

		result = result + ((b[index] - 48) << power);
		index--;
		power++;
	}
	return (result);
}
