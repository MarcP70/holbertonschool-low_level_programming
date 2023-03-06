#include "main.h"

/**
 * _print_rev_recursion - This function prints a string in reverse
 * @s: pointer to the string
 *
 * Title: 1-print_rev_recursion.c
 * Auhor: Marc Pourias
 * Date: 06/03/2023
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
