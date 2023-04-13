#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add the element to
 * @key: the key of the element to add
 * @value: the value of the element to add
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;

	if (!ht || !key || !*key)
		return (0);

	/* get the index for the key */
	index = key_index((const unsigned char *) key, ht->size);

	/* allocate memory for new node */
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	/* copy key and value into new node */
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	/* handle collision: add new node at beginning of linked list */
	if (ht->array[index])
		temp = ht->array[index];
	else
		temp = NULL;
	while (temp)
	{
		if (!strcmp(temp->key, key))
		{
			free(temp->value);
			temp->value = strdup(value);
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			return (1);
		}
		temp = temp->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
