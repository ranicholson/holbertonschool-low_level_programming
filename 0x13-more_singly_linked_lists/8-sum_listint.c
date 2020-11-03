#include "lists.h"

/**
 * sum_listint - function that returns sum of data in a linked list
 * @head: list to return sum of
 * Return: sum if data in list
 */

int sum_listint(listint_t *head)
{
	int x = 0;

	while (head != NULL)
	{
		x += head->n;
		head = head->next;
	}

	return (x);
}
