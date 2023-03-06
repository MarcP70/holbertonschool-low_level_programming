#include "main.h"

/**
 * _pow_recursion - This function returns the value of
 *                  x raised to the power of y
 * @x: the number to be raised
 * @y: the power
 * Return: the result of rised
 *
 * Title: 4-pow_recursion.c
 * Auhor: Marc Pourias
 * Date: 06/03/2023
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
