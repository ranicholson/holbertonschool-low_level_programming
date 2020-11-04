#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: list to get node from
 * @index: index of the node to return
 * Return: node referenced by the index or NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;

	while (head != NULL)
	{
		if (y == index)
			break;

		head = head->next;
		y++;
	}

	if (y < index)
		return (NULL);

	return (head);
}

/**
 * delete_nodeint_at_index - function to delete node referenced by index
 * @head: list to remove node from
 * @index: node that should be removed
 * Return: 1 upon success and -1 upon failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2;

	if (index == 0)
		tmp = *head;

	else
		tmp = get_nodeint_at_index(*head, (index - 1));

	if (tmp == NULL)
		return (-1);

	if (index == 0)
		tmp2 = get_nodeint_at_index(*head, (index + 1));

	else
		tmp2 = get_nodeint_at_index(*head, index);

	if (tmp2 == NULL && tmp->next != NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp2;
		free(tmp);
		return (1);
	}

	else
	{
		tmp->next = tmp2->next;\
		free(tmp2);
		return (1);
	}
}
