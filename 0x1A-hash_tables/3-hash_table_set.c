#include "hash_tables.h"

/**
 * hash_table_set - this function add a new_node element int the hash table
 *
 * @ht: Hash table
 * @key: Key
 * @value: Value of the element
 *
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);

	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);

	if (new_node->value == NULL)
	{
		free(new_node);
		free(new_node->key);
		return (0);
	}

	add_node(ht, new_node);
	return (1);
}

/**
 * add_node - Function to add a node to the hash table
 *
 * @ht: Hash table
 * @node: Node to add
 *
 * Return: void
 */

void add_node(hash_table_t *ht, hash_node_t *node)
{
	unsigned long int idx;
	hash_node_t *tmp = NULL;

	idx = key_index((const unsigned char *)node->key, ht->size);
	tmp = ht->array[idx];

	if (ht->array[idx])
	{
		tmp = ht->array[idx];

		while (tmp)
		{
			if (strcmp(tmp->key, node->key) == 0)
				break;

			tmp = tmp->next;
		}

		if (tmp)
		{
			free(tmp->value);
			tmp->value = strdup(node->value);
			free(node->value);
			free(node->key);
			free(node);
		}

		else
		{
			node->next = ht->array[idx];
			ht->array[idx] =  node;
		}
	}

	else
	{
		node->next = NULL;
		ht->array[idx] = node;
	}
}
