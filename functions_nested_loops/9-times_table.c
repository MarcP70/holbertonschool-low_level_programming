#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int row;
	int column;
	int x;
	int dizaine;
	int unite;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			x = row * column;
			dizaine = x / 10;
			unite = x % 10;

			if (column != 0)
			{
				_putchar(44);
				_putchar(32);
			}
			if (x > 9)
			{
				_putchar('0' + dizaine);
			} else
			{
				if (column != 0)
				{
					_putchar(32);
				}
			}
			_putchar('0' + unite);
		}
		_putchar('\n');
	}
}
