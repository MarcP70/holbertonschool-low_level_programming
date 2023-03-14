#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - This function allocates memory
 * @b: the allocation's size
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
