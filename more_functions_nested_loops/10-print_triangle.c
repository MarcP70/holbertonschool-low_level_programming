#include "main.h"
/**
 * print_triangle - This function prints a triangle, followed by a new line
 *
 * @size: is the size of the triangle
 *
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(32);
			}
			for (k = 0; k < i; k++)
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
