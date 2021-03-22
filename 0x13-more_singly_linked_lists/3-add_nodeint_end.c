#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of list
 * @head: Pointer to list
 * @n: Given number
 *
 * Return: Address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = NULL;
	listint_t *ending = NULL;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	for (ending = *head; ending->next != NULL;)
		ending = ending->next;

	ending->next = node;

	return (node);
}
