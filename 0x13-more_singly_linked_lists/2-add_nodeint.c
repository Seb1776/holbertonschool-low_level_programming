#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beggining of list
 * @head: Pointer to list
 * @n: Given number
 *
 * Return: Address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}