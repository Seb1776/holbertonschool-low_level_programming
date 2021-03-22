#include "lists.h"

/**
 * listint_len - Prints the number of elements in a list
 * @h: Pointer to the list
 *
 * Return: Number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
		h = h->next;

	return (nodes);
}
