#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints the elements of a doubly linked list.
 *
 * @h: A pointer to the first element of the list.
 *
 * Return: The number of elements in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	for (current = h; current != NULL; current = current->next)
	{
		printf("%d\n", current->n);
		count++;
	}

	return (count);
}
