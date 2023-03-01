#include "main.h"

/**
 * cap_string - the program turns all the first letters of each word
 *              into capital letters
 *
 * @str: the pointer of array
 *
 * Return: array modified
 */

char *cap_string(char *str)
{
	int index = 0;

	if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;

	index = 1;
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z' && str[index - 1] == 32)
			str[index] -= 32;

		index++;
	}

	return (str);
}
