#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - This function allocates memory for an array and initialized it
 * @nmemb: number elements
 * @size: type of elements
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == '0')
		return (NULL);

	a = calloc(nmemb, size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		a[i] = 0;

	return (a);
}
