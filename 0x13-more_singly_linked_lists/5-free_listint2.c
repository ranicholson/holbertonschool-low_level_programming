#include "lists.h"

/**
 * free_listint2 - free a list and set head to NULL
 * @head: list to free
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *tmp2;

	tmp = *head;

	while (tmp)
	{
		tmp2 = tmp->next;
		free(tmp);
		tmp = tmp2;
	}

	*head = NULL;
}
