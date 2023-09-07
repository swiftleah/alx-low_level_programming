#include "hash_tables.h"

/**
 * hash_table_set - adds elements to hash table
 * @ht: hash table that we will add an element to
 * @key: key - cannot be empty
 * @value: value associated to key - must be duplicated
 * Return: 1 if successful, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *keycpy, *valuecpy;
	hash_node_t *newnode = NULL;
	hash_node_t *current = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	valuecpy = strdup(value);
	if (valuecpy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = valuecpy;
			return (1);
		}
		current = current->next;
	}
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		free(valuecpy);
		return (0);
	}
	keycpy = strdup(key);
	if (keycpy == NULL)
		return (0);
	newnode->key = keycpy;
	newnode->value = valuecpy;
	newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}
