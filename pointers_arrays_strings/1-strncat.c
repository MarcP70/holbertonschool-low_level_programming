#include "main.h"

/**
 * _strncat - This function concatenates two strings in arrays
 *           on the first array
 *
 * @dest: array of destination
 * @src: array of source
 * @n: bytes from src
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
