#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
	int heure;
	int minute;

	for (heure = 0; heure < 24; heure++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar('0' + heure / 10);
			_putchar('0' + heure % 10);
			_putchar(58);
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			_putchar('\n');
		}
	}
}
