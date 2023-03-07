#include "main.h"

/**
 * _puts - This function prints a string, followed by a new line, to stdout
 *
 * @str: pointer of string
 *
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
