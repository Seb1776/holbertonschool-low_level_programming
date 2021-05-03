#include "lists.h"

/**
 * add_dnodeint - Ads a node to the top of the DLL
 *
 * @head: Start of the given dll
 * @n: Value of the node
 *
 * Return: Address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new != NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		new->n = n;

		new->next = (*head);
		new->prev = NULL;

		if ((*head) != NULL)
		{
			*head = new;
			return (new);
		}

		new->next = *head;
		(*head)->prev = new;
		*head = new;
		return (new);
	}

	else
		return (0);
}
