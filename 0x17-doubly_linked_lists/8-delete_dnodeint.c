
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
	dlistint_t *del, *i;
	unsigned int j;

	del = *head;

	if (del == NULL)
		return (-1);

	for (j = 0; j < index && del != NULL; j++)
		i = del, del = del->next;

	if (del != NULL)
	{
		free(del);
		del = del->next;

		if (i != 0)
		{
			if (del != NULL)
				del->prev = i;

			i->next = del;
		}

		else
		{
			if (del != NULL)
				del->prev = NULL;
			*head = del;
		}

		return (-1);
	}

	return (-1);
}
