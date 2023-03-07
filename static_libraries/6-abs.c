#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @n: number input
 *
 * Return: absolute number on output
 */

int _abs(int n)
{
	int var;

	if (n >= 0)
	{
		var = n;
	} else
	{
		var = n * -1;
	}
	return (var);
}
