#include <stdio.h>
#include "main.h"

/**
 * _memcpy - This function copies memory area
 *           The function fills the first n bytes of the memory area
 *           pointed to by s with the constant byte b
 *
 * @dest: pointer to the block of destination memory
 * @src: pointer to the block of source memory
 * @n: the size of the memory to copy
 *
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[+i] = src[i];

	return (dest);
}
