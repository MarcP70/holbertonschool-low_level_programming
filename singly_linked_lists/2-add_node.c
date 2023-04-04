#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: A pointer to pointer to the head of the linked list.
 * @str: The pointer to the string to be duplicated on the new node.
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i;
	unsigned int len_str = 0;

	while (*(str++))
		len_str++;

	for (i = len_str; i >= 0; i--)
		str--;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len_str;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}