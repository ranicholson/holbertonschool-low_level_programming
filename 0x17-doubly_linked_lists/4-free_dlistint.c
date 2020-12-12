#include "lists.h"

/**
 * free_dlistint - function to free a list
 * @head: list to be freed
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *temp2;

	if (head == NULL)
		return;

	temp = head;

	while (temp)
	{
		temp2 = temp;
		temp = temp2->next;
		free(temp2);
	}
}
