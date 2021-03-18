#include "lists.h"

/**
 * list_len - Return the amount of items in a list
 *
 * @h: Given list
 *
 * Return: Total items in a list
 */
size_t list_len(const list_t *h)
{
	size_t size;

	for (size = 0; h != NULL; size++)
		h = h->next;

	return (size);
}
