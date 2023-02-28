#include "main.h"

/**
 * _strcmp - This function compares two strings
 *
 * @s1: first string pointer
 * @s2: second string pointer
 *
 * Return: the result of the comparison
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
