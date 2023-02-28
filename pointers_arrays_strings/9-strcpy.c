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
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
