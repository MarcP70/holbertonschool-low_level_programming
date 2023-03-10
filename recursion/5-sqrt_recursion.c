#include "main.h"
/**
 * _sqrt - Function recursive
 * @nb: the squar number
 * @n: the number to checked
 * Return: the square number
 */

int _sqrt(int nb, int n)
{
	if (nb * nb == n)
		return (nb);

	if (nb == n / 2)
		return (-1);

	return (_sqrt(nb + 1, n));
}

/**
 * _sqrt_recursion - Function to find the square
 * @n: the number
 * Return: the squar number
 */

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
