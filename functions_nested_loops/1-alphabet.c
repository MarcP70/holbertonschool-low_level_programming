#include "main.h"

/**
 * main - Program entry point
 * This program use function to prints the alphabet in lowcase
 *
 * Return: 0 on success. Error code otherwise
 */

/** Function print_alphabet */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
