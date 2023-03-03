#include <stdio.h>
#include "main.h"

/**
 * _strcpy - This function copies the string pointed to by src,
 *           including the terminating null byte (\0),
 *           to the buffer pointed to by dest.
 *
 * @dest: the pointer to destination
 * @src: the pointer to source
 *
 * Return: the pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
