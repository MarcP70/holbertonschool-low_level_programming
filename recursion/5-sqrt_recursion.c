#include "main.h"

/**
 * _sqrt_recursion - This function returns the natural square root of a number
 * @n: the number to be checked
 * Return: the natural square root, -1 if not
 * _sqrt - Function loop
 * @nb: the nb
 * Title: 5-sqrt_recursion.c
 * Auhor: Marc Pourias
 * Date: 09/03/2023
 */

int _sqrt(int nb, int n)
{
	if (nb * nb == n)
		return (nb);

	if (nb == n / 2)
		return (-1);

	return (_sqrt(nb + 1, n));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(2, n));
}
