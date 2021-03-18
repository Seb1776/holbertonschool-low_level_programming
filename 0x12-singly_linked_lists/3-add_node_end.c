#include "lists.h"
#include <string.h>
int _strlen(char *str);

/**
 * add_node_end - Adds a new element at the end of the list
 *
 * @head: Given list
 * @str: Item to add
 *
 * Return: Address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node = NULL;/*New node at the end*/
	list_t *last_node = NULL;/*Currently end node*/

	if (str == NULL)
		return (NULL);

	end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
		return (NULL);

	end_node->str = strdup(str);

	if (end_node->str == NULL)
	{
		free(end_node);
		return (NULL);
	}

	end_node->len = _strlen(end_node->str);
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	for (last_node = *head; last_node->next != NULL;)
		last_node = last_node->next;

	last_node->next = end_node;

	return (end_node);
}

/**
 * _strlen - Count the length of a string.
 *
 * @str: String.
 *
 * Return: Length of a string.
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{ }

	return (i);
}
