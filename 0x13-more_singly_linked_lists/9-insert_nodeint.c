#include "lists.h"

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

	if (head == NULL)
		return (NULL);

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
