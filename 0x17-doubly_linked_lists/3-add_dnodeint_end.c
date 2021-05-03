#include "lists.h"

/**
 * add_dnodeint_end - Ads a node to the end of the DLL
 *
 * @head: Start of the given dll
 * @n: Value of the node
 *
 * Return: Address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *mid;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	for (mid = *head; mid->next != NULL; )
		mid = mid->next;

	mid->next = new;
	new->prev = mid;
	return (new);
}
