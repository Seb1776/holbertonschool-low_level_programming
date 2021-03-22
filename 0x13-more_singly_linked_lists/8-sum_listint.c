#include "lists.h"

/**
 * sum_listint - Calculaate the sum of all data in a list.
 * @head: Pointer to list.
 *
 * Return: Return the sum of all contents.
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	unsigned int sum = 0;

	for (node = head; node != NULL; node = node->next)
	{
		sum += node->n;
	}

	return (sum);
}
