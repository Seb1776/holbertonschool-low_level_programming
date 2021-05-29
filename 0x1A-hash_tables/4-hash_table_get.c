#include "hash_tables.h"

/**
 * hash_table_get - return value of key
 *
 * @ht: Hash table
 * @key: Key
 *
 * Return: void
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	int idx;

	if (ht == NULL || key == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);

		tmp = tmp->next;
	}

	return (NULL);
}
