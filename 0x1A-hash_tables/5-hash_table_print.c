#include "hash_tables.h"

/**
 * hash_table_print - print the array
 *
 * @ht: Hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx, j = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		tmp =  ht->array[idx];

		if (tmp)
		{
			while (tmp)
			{
				j++;
				tmp = tmp->next;
			}
		}
	}

	printf("{");

	for (idx = 0; idx < ht->size; idx++)
	{
		tmp = ht->array[idx];

		if (tmp)
		{
			while (tmp)
			{
				printf("'%s' : '%s'", tmp->key, tmp->value);

				if (--j)
					printf(", ");

				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}
