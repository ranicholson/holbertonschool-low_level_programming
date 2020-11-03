#include "lists.h"

/**
 * add_nodeint_end - function to add node to end of list
 * @head: start of list
 * @n: integer to store in new node
 * Return: address of new element or NULL upon failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode, *tmp;

	nnode = malloc(sizeof(listint_t));

	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->next = NULL;

	if (*head == NULL)
		*head = nnode;

	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = nnode;
	}

	return (*head);
}
