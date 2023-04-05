#include <stdlib.h>
#include "lists.h"


/**
 * delete_dnodeint_at_index - Deletes the node at index `index` of a
 * dlistint_t linked list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *tmp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	/* Traverse the list until the node before the node to be deleted */
	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	/* If the node to be deleted doesn't exist or is the last node */
	if (current == NULL || current->next == NULL)
		return (-1);

	/* Update the `prev` pointer of the node after the node to be deleted */
	/* and free the node to be deleted */
	tmp = current->next->next;
	free(current->next);
	current->next = tmp;
	if (tmp != NULL)
		tmp->prev = current;

	return (1);
}
