#include "lists.h"

/**
 * free_list - function to free a lisT_t list
 * @head: list to free
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_list(head->next);

		free(head->str);
		free(head);
	}
}
