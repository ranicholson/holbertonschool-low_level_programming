#include "lists.h"

/**
 * insert_dnodeint_at_index - function to insert node at given position
 * @h: list to insert node
 * @idx: index location to insert node
 * @n: value to store in node
 * Return: address of new node, or NULL upon failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *idxnode = *h, *nnode;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while ((idx - 1) != 0)
	{
		if (idxnode == NULL)
			return (NULL);

		idxnode = idxnode->next;
		idx--;
	}

	if (idxnode == NULL)
		return (NULL);

	if (idxnode->next == NULL)
		return (add_dnodeint_end(h, n));

	nnode = malloc(sizeof(dlistint_t));

	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->prev = idxnode;
	nnode->next = idxnode->next;
	idxnode->next->prev = nnode;
	idxnode->next = nnode;

	return (nnode);
}
