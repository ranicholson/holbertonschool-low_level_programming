#include "lists.h"

/**
 * delete_dnodeint_at_index - funtion to delete node at specified index
 * @head: list to delete node from
 * @index: index of node to delete
 * Return: 1 if successful or -1 upon failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *idxnod = *head;

	if (idxnod == NULL)
		return (-1);

	if (index == 0)
	{
		if (idxnod->next == NULL)
		{
			free(idxnod);
			*head = NULL;
			return (1);
		}
		idxnod->next->prev = NULL;
		*head = idxnod->next;
		free(idxnod);
		return (1);
	}
	idxnod = idxnod->next;
	while ((index - 1) != 0)
	{
		if (idxnod == NULL)
		return (-1);

		idxnod = idxnod->next;
		index--;
	}

	if (idxnod->next == NULL)
	{
		idxnod->prev->next = NULL;
		free(idxnod);
			return (1);
	}

	idxnod->next->prev = idxnod->prev;
	idxnod->prev->next = idxnod->next;
	free(idxnod);

	return (1);
}
