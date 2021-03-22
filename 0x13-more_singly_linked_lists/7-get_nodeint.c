#include "lists.h"
unsigned int list_len(const listint_t *h);

/**
 * get_nodeint_at_index - Found the N node of a list.
 * @head: Pointer to list.
 * @index: Index of the node.
 *
 * Return: The N node of a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int size_list, i;

	size_list = list_len(node);

	if (index >= size_list || size_list == 0)
		return (NULL);

	for (node = head, i = 0; i < index; i++)
		node = node->next;

	return (node);
}

/**
 * list_len - Return the number of elements in a list.
 * @h: Pointer to list.
 * Return: The number of elements in a list.
 */
unsigned int list_len(const listint_t *h)
{
	unsigned int n_nodes = 0;

	if (h == NULL)
		return (0);

	for (n_nodes = 0; h != NULL; n_nodes++)
		h = h->next;

	return (n_nodes);
}
