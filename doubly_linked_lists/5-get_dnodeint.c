#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list.
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 *
 * Return: If the node does not exist, return NULL.
 * Otherwise, return a pointer to the nth node of the list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (i < index)
		return (NULL);

	return (current);
}
