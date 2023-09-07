#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table we are working with
 * @key: key we are looking for
 * Return: value associated with element or NULL if key cant be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	printf("%li\n", index);

	temp = ht->array[index];
	while (temp)
	{
		printf("Entered while loop\n");
		if (strcmp(temp->key, key) == 0)
		{
			printf("Found key\n");
			return (temp->value);
		}
		printf("Iterating\n");
		temp = temp->next;
	}
	return (NULL);
}
