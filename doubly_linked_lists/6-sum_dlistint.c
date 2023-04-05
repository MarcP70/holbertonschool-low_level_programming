#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data of elements in a doubly
 *                linked list.
 *
 * @head: A pointer to the first element of the list.
 *
 * Return: The sum of all the data of elements in the list.
 *         If the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *current;
	int sum = 0;

	for (current = head; current != NULL; current = current->next)
	{
		sum = sum + current->n;
	}

	return (sum);
}
