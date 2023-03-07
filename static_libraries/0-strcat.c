#include "main.h"

/**
 * _strcat - This function concatenates two strings in arrays
 *           on the first array
 *
 * @dest: array of destination
 * @src: array of source
 *
 * Return: array of destination
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
