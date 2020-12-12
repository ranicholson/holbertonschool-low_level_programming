#include "lists.h"

/**
 * get_dnodeint_at_index - function to return nth node of a list
 * @head: list to return node from
 * @index: number of node to be returned
 * Return: requested node or NULL upon failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head)
	{
		if (x == index)
			break;

		head = head->next;
		x++;
	}

	if (x < index)
		return (NULL);

	return (head);
}
