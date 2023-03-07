#include <stdio.h>
#include "main.h"

/**
 * _strpbrk -  This function searches a string for any of a set of bytes
 *
 * @s: pointer to the string sourc
 * @accept: pointer to the string allowed caracters
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ch = accept;

		while (*ch != '\0')
		{
			if (*ch == *s)
			{
				return ((char *)s);
			}
			ch++;
		}
		s++;
	}
	return (NULL);
}
