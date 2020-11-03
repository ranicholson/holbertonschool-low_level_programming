#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list and returns the
 * head node's data
 * @head: node to delete
 * Return: data from deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int x;

	tmp = *head;
	*head = tmp->next;
	x = tmp->n;
	free(tmp);

	return (x);
}
