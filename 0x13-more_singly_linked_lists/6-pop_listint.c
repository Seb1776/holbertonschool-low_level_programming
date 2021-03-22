#include "lists.h"

/**
 * pop_listint - Deletes the first node of a list
 * @head: Pointer to pointer to list
 *
 * Return: The first node data
 */
int pop_listint(listint_t **head)
{
	listint_t *tail = NULL;
	int n_value;

	if (*head == NULL)
		return (0);

	tail = (*head)->next;
	n_value = (*head)->n;
	free(*head);

	*head = tail;

	return (n_value);
}
