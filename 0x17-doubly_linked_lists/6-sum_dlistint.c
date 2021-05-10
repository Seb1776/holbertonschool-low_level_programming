#include "lists.h"

/**
 * sum_dlistint - Sums all list contents
 *
 * @head: Start of the list
 *
 * Return: Result of operation
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *n;
	int res = 0;

	while (head)
	{
		if (head == NULL)
			return (NULL);

		n = head;
		head = head->next;
		res += n->n;
	}

	return (res);
}
