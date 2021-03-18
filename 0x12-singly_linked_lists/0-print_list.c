#include "lists.h"
/**
 * print_list - Prints all elements in a list
 *
 * @h: Given list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
	}

	return (nodes);
}
