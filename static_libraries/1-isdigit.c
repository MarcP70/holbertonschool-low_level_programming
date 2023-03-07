#include "main.h"
#include <stdio.h>
/**
 * _isdigit - This function checks for a digit (0 through 9)
 *
 * @c: number to check
 *
 * Return: 1 if c is a digit
 *         0 otherwise
 */

int _isdigit(int c)
{
	int var;

	if (c > 47 && c < 58)
	{
		var = 1;
	} else
	{
		var = 0;
	}
	return (var);
}
