#include "main.h"

/**
 * print_rev - This function prints a string, in reverse,
 *             followed by a new line
 *
 * @s: pointer of string
 *
 */

void print_rev(char *s)
{
	int len = 0;
	int index = 0;

	while (s[index++])
	{
		len++;
	}

	for (index = len - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
