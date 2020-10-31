#include "lists.h"

/**
 * add_node_end - Function that adds new node at the end of a list
 * @head: List to add node to
 * @str: string to duplicate
 * Return: Address of head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ntail, *y;
	unsigned int x;
	char *temp;

	ntail = malloc(sizeof(list_t));

	if (!ntail)
		return (NULL);

	temp = strdup(str);

	if (temp == NULL)
	{
		free(ntail);
		return (NULL);
	}

	for (x = 0; str[x]; x++)
		;

	ntail->str = temp;
	ntail->len = x;
	ntail->next = NULL;

	if (*head == NULL)
		*head = ntail;

	else
	{
		y = *head;

		while (y->next != NULL)
			y = y->next;

		y->next = ntail;
	}

	return (*head);
}
