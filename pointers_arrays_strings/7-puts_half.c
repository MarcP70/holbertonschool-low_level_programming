#include "main.h"

/**
 * puts_half - This function prints half of a string, followed by a new line
 *
 * @str: pointer of string
 *
 */

void puts_half(char *str)
{
	int index = 0;
	int len = 0;

	while (str[index++])
		len++;

	if (len % 2 != 0)
		len--;

	for (index = len / 2; index < len; index++)
		_putchar(str[index]);

	_putchar('\n');
}
