#include "hash_tables.h"

/**
 * hash_table_create - Function to create a hash table
 *
 * @size: Size of the table
 *
 * Return: New node
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_node;

	new_node = malloc(sizeof(hash_table_t));

	if (new_node == NULL)
		return (NULL);

	new_node->array = calloc(size, sizeof(hash_node_t *));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->size = size;
	return (new_node);
}
