#include "lists.h"

/**
 * free_listint - Free a list
 *
 * @head: Pointer to list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tail = NULL;

	for ( ; head != NULL; )
	{
		tail = head->next;
		free(head);
		head = tail;
	}
}
