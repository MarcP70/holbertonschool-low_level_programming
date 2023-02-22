#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that  prints all natural numbers from n to 98
 *              , followed by a new line
 * @n: number to start count
 *
 */

void print_to_98(int n)
{
	if (n != 98)
	{
	do {
		printf("%d, ", n);
		if (n <= 98)
		{
			n = n + 1;
		}
		else
		{
			n = n - 1;
		}
	} while (n != 98);
	}
	printf("98\n");
}
