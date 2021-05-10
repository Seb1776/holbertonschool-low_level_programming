#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new item at a given position
 *
 * @h: Start of list
 * @idx: Index of the position of insertion
 * @n: Value of the node
 *
 * Return:  addres that new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nw, *nx, *i;
	unsigned int j;

	if (h == NULL)
		return (NULL);

	if (idx > 0)
	{
		i = *h;

		for (j = 0; j < idx - 1 && i != NULL; j++)
			i = i->next;
	}

	nw = malloc(sizeof(dlistint_t));

	if (nw == NULL)
		return (NULL);

	nw->n = n;

	if (idx == 0)
	{
		nx = *h;
		*h = nw;
		nw->prev = NULL;
	}

	else
	{
		nw->prev = i;
		nx = i->next;
		i->next = nw;
	}

	nw->next = nx;

	if (nw->next != NULL)
		nw->next->prev = nw;
	return (nw);
}
