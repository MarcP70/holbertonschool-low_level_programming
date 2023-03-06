#include "main.h"

/**
 * _strlen_recursion - This function returns the lenght of a string
 * @s: pointer to the string
 * Return: the lenght of the string
 *
 * Title: 2-strlen_recursion.c
 * Auhor: Marc Pourias
 * Date: 06/03/2023
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
