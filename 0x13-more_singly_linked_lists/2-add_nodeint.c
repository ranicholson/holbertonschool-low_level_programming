#include "lists.h"

/**
 * add_nodeint - function to add new node at beginning of list
 * @head: current head of list
 * @n: value to store in new node
 * Return: address of new element or NULL upon failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode;

	nnode = malloc(sizeof(listint_t));

	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->next = *head;
	*head = nnode;

	return (*head);
}
