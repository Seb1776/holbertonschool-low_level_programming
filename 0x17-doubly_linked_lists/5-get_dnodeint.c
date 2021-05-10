#include "lists.h"

/**
 * get_dnodeint_at_index - Selects the X item at given position
 *
 * @head: Start of list
 * @index: Position of the item to print
 *
 * Return: The X element of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *n;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		n = head;
		head = head->next;
	}

	return (n);
}
