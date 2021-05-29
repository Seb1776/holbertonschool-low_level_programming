#include "hash_tables.h"

/**
 * hash_table_delete - delete has table
 *
 * @ht: Hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx])
		{
			while (ht->array[idx])
			{
				tmp = ht->array[idx]->next;
				free(ht->array[idx]->key);
				free(ht->array[idx]->value);
				free(ht->array[idx]);
				ht->array[idx] = tmp;
			}

			free(ht->array[idx]);
		}
	}

	free(ht->array);
	free(ht);
}
