#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert new node at given position
 * @head: list to insert node into
 * @idx: location to insert node
 * @n: data to store in new node
 * Return: Address of the new node or NULL upon failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nnode, *tmp;

	nnode = malloc(sizeof(listint_t));

	if (nnode == NULL)
		return (NULL);

	tmp = get_nodeint_at_index(*head, (idx - 1));

	if (tmp == NULL)
	{
		free(nnode);
		return (NULL);
	}

	nnode->n = n;
	nnode->next = tmp->next;
	tmp->next = nnode;

	return (*head);
}
