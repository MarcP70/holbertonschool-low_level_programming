#include "main.h"

/**
 * _puts_recursion - This function prints a string, followed by a new ligne
 * @s: pointer to the string
 *
 * Title: 0-puts_recursion
 * Auhor: Marc Pourias
 * Date: 06/03/2023
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	} else
	{
		_putchar('\n');
	}
}
