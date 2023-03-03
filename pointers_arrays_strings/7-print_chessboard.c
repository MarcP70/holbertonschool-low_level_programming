#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - This function prints the chessboard
 *
 * @a: pointer to 2d array
 *
 */

void print_chessboard(char (*a)[8])
{
	int nb_elements = sizeof(a);
	int i, j;

	for (i = 0; i < nb_elements; i++)
	{
		for (j = 0; j < nb_elements; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
