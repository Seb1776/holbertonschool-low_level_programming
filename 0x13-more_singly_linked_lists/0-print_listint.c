#include "lists.h"

/**
 * print_listint - Prints all elements in a list
 * @h: Pointer to the list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
