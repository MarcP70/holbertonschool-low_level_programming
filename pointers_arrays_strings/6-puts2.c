#include "main.h"

/**
 * puts2 - This function prints every other character of a string,
 *         starting with the first character
 *
 * @str: pointer of string
 *
 */

void puts2(char *str)
{
	int index = 0;
	int len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
