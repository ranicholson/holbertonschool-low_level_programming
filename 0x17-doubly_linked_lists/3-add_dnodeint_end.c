#include "lists.h"

/**
 * add_dnodeint_end - function to add node at end of list
 * @head: adress of list to add node to
 * @n: number to store in node
 * Return: address of the new element or NULL upon failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nnode, *temp = *head;

	nnode = malloc(sizeof(dlistint_t));

	if (nnode == NULL)
		return (NULL);

	nnode->n = n;

	if (*head == NULL)
	{
		nnode->prev = NULL;
		nnode->next = NULL;
		*head = nnode;
		return (*head);
	}

	while (temp->next != NULL)
		temp = temp->next;

	nnode->prev = temp;
	nnode->next = NULL;
	temp->next = nnode;

	return (nnode);
}
