
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes an item in a given position
 *
 * @head: Start of the list
 * @index: Index position of the item
 *
 * Return: On success 1, On failure -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del, *h;
	unsigned int count = 0;

	del = *head;

	if (del == NULL)
		return (-1);

	for (count = 0; count < index && del != NULL; count++)
		h = del, del = del->next;

	if (del != NULL)
	{
		free(del);
		del = del->next;

		if (count != 0)
		{
			if (del != NULL)
				del->prev = h;

			h->next = del;
		}

		else
		{
			if (del != NULL)
				del->prev = NULL;

			*head = del;
		}

		return (1);
	}

	return (-1);
}
