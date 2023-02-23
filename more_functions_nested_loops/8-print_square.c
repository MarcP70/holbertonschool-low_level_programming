#include "main.h"
/**
 * print_diagonal - This function draws a diagonal line on the terminal
 *
 * @size: is the size of the square
 *
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	} else
	{
	_putchar('\n');
	}
}
