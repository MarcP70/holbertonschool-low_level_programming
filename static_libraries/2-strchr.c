#include <stdio.h>
#include "main.h"

/**
 * _strchr - This function locates a character in a string
 *           The function fills the first n bytes of the memory area
 *           pointed to by s with the constant byte b
 *
 * @s: pointer to the string
 * @c: caracter to locate
 *
 * Return: a pointer to the first occurrence of the character c in the string s
 *         or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
