#include "main.h"

/**
 * factorial - This function returns the factorial of a given number
 * @n: the number to be factorized
 * Return: the result of factoring
 *
 * Title: 3-factorial.c
 * Auhor: Marc Pourias
 * Date: 06/03/2023
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
