#include "main.h"

/**
 * _strlen - This function returns the length of a string
 *
 * @s: pointer of integer s
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
