#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: number input
 *
 * Return: last digit of a number
 */

int print_last_digit(int n)
{
	int var;

	var = n % 10;
	if (var < 0)
	{
		var = var * -1;
	}
	_putchar('0' + var);
	return (var);
}
