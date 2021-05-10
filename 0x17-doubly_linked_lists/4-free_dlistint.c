#include "lists.h"

/**
 * free_dlistint - Free s from memory a DLL
 *
 * @head: Start of the list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
