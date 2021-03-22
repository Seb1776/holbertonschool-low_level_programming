#include "lists.h"
unsigned int list_len(const listint_t *h);

/**
 * delete_nodeint_at_index -  Deletes the node at given position
 * @head: Pointer to pointer to head
 * @index: Position to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node = *head;
	listint_t *tail = NULL;
	unsigned int size, i;

	size = list_len(prev_node);

	if (index >= size)
		return (-1);

	if (index == 0)
	{
		tail = (*head)->next;
		free(*head);
		*head = tail;
		return (1);
	}

	prev_node = *head;

	for (i = 0; i < (index - 1); i++)
		prev_node = prev_node->next;

	tail = (prev_node->next)->next;
	free(prev_node->next);
	prev_node->next = tail;

	return (1);
}

/**
 * list_len - Return the number of elements in a list.
 * @h: Pointer to list.
 *
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
