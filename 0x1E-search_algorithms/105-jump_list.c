#include "search_algos.h"

/**
 * jump_list - Search for the first occurrence of a value on a singly-linked
 *             list using the jump search algorithm with the optimal step:
 *             sqrt(size).
 * @list: The head of the list to be searched.
 * @size: The total number of nodes of the list.
 * @value: The value to be searched.
 *
 * Return: The pointer of the node with the value searched if found.
 *         Return NULL otherwise.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step;
	listint_t *lo_ptr, *hi_ptr;

	if (!list)
		return (NULL);

	step = sqrt(size);
	lo_ptr = list;
	hi_ptr = advance_n_nodes(list, step);

	while (1)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       hi_ptr->index, hi_ptr->n);
		if (hi_ptr->next != NULL &&
		    !(value >= lo_ptr->n && value <= hi_ptr->n))
		{
			lo_ptr = hi_ptr;
			hi_ptr = advance_n_nodes(hi_ptr, step);
		}
		else
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       lo_ptr->index, hi_ptr->index);

	for (; lo_ptr != NULL; lo_ptr = lo_ptr->next)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       lo_ptr->index, lo_ptr->n);
		if (value == lo_ptr->n)
			return (lo_ptr);
	}
	return (NULL);
}

/**
 * advance_n_nodes - Advance n number of nodes on a singly-linked list.
 * @list: The current node.
 * @step: The steps needed to advance to the next node.
 *
 * Return: The pointer to the next node. If step goes beyond the length
 *         of the list, returns the last node.
 */
listint_t *advance_n_nodes(listint_t *list, size_t step)
{
	size_t counter;

	for (counter = 0; counter < step; counter++)
	{
		if (list->next)
			list = list->next;
		else
			break;
	}
	return (list);
}
