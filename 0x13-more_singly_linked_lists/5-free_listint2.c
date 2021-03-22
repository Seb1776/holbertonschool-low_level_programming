#include "lists.h"

/**
 * free_listint2 - Free a list
 * @head: Pointer to list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tail = NULL;

	if (head == NULL)
		return;

	for (tail = *head; *head != NULL;)
	{
		tail = tail->next;
		free(*head);
		*head = tail;
	}

	*head = NULL;
}
