#include <stdio.h>
#include "main.h"

/**
 * _atoi - This function convert a string to an integer
 *
 * @s:
 *
 * Return: the found number into a string
 */

int _atoi(char *s)
{
	int number;

	while (s[index++] != 0)
	{
		if ((s[index] >= '0') && (s[index] <= '9'))
		{
			printf("%d\n", index);
			number = number & (s[index]);
		}
		// len++;

	}
	return (number);
}
