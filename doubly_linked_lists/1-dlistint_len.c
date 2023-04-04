#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 *
 * @h: A pointer to the first element of the list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	for (current = h; current != NULL; current = current->next)
	{
		count++;
	}

	return (count);
}
