#include "main.h"

/**
 * rev_string - This function reverses a string
 *
 * @s: pointer of string
 *
 */

void rev_string(char *s)
{
	int len = 0;
	int index = 0;
	int tmp;

	while (s[index++])
	{
		len++;
	}

	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
