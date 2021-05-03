#include "lists.h"

/**
 * print_dlistint - Prints the contents of a DLL
 *
 * @h: Start of the given dll
 *
 * Return: Number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	else
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}

	return (i);
}
