#include <stdlib.h>
#include <time.h>
/* more headers goes there */
# include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Program entry point
 * This program prints all possible combinations of two two-digit numbers
 *
 * Return: 0 on success. Error code otherwise
 */

int main(void)
{
	int i;
	int j;
	int unite_i;
	int dizaine_i;
	int unite_j;
	int dizaine_j;
	int first;

	first = 0;

	for (i = 0; i <= 99 ; i++)
	{
		dizaine_i = i / 10;
		unite_i = i % 10;
		for (j = 0; j <= 99; j++)
		{
			dizaine_j = j / 10;
			unite_j = j % 10;
			if (j > i)
			{
				if (first != 0)
				{
					putchar(',');
					putchar(' ');
				}
				first = 1;
				putchar(dizaine_i + '0');
				putchar(unite_i + '0');
				putchar(' ');
				putchar(dizaine_j + '0');
				putchar(unite_j + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}
