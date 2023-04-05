#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node on doubly linked list
 *                            at a given position.
 *
 * @h: A pointer to pointer of the first element of the list.
 * @idx: The index of the list where the new node should be added.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp_node = *h;
	unsigned int i;

	/* Create a new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	/* Insert the node at the beginning of the list */
	if (idx == 0) {
		if (*h != NULL)
			(*h)->prev = new_node;
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}

	/* Traverse the list until the desired index is reached */
	for (i = 0; i < idx - 1 && temp_node != NULL; i++)
		temp_node = temp_node->next;

	/* If the index is out of bounds, free the new node and return NULL */
	if (temp_node == NULL) {
		free(new_node);
		return (NULL);
	}

	/* Insert the node between two existing nodes */
	new_node->next = temp_node->next;
	if (temp_node->next != NULL)
		temp_node->next->prev = new_node;
	temp_node->next = new_node;
	new_node->prev = temp_node;

	return (new_node);
}
