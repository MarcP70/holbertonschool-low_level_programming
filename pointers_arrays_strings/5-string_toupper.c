#include "main.h"

/**
 * string_toupper - This program changes all lowercase letters of
 *                   a string to uppercase
 *
 * @str: the pointer of array
 *
 * Return: array in uppercase
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
