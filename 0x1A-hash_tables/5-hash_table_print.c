#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: pointer to hash table to be printed
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int printed = 0;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			printed = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
