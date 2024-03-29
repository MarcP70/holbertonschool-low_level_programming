#include <stdio.h>
#include "lists.h"

/**
 * list_len - Count a number of nodes in a linked list_t list.
 * @h: A pointer to the head of the linked list_t list.
 *
 * Return: The number of nodes in the linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
