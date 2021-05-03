#include "lists.h"

/**
 * print_dlistint - Gives the number of elements in a list
 *
 * @h: Start of the given dll
 *
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	else
	{
		while (h != NULL)
		{
			h = h->next;
			i++;
		}
	}

	return (i);
}
