#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: list to get node from
 * @index: index of the node to return
 * Return: node referenced by the index or NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0, x = index;

	while (head != NULL)
	{
		if (y == x)
			break;

		head = head->next;
		y++;
	}

	if (y < x)
		return (NULL);

	return (head);
}
