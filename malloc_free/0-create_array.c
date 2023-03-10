#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - This function creates an array of chars,
 *  and initializes it with a specific char
 * @size: array's size
 * @c: initialization value
 * Return: initialized array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
