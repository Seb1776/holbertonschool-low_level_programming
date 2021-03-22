#include "lists.h"
unsigned int list_len(const listint_t *h);

/**
 * insert_nodeint_at_index - Insert a new node at a given position.
 * @head: Pointer to pointer to list.
 * @idx: Position to insert.
 * @n: Giveb number.
 *
 * Return: The address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev_node = *head;
	listint_t *new = NULL;
	unsigned int size, i;

	if (head == NULL)
		return (NULL);

	size = list_len(prev_node);

	if (idx > size)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
		prev_node = prev_node->next;

	new->next = prev_node->next;
	prev_node->next = new;

	return (new);
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
