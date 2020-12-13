#include "lists.h"

/**
 * add_dnodeint - function to add new node at beginning
 * @head: list to add node to
 * @n: number to store in node
 * Return: address of new element or NULL upon failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nnode;

	nnode = malloc(sizeof(dlistint_t));

	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->prev = NULL;
	nnode->next = *head;

	if (*head != NULL)
		(*head)->prev = nnode;

	*head = nnode;

	return (*head);
}
