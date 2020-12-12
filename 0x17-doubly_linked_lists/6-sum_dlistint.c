#include "lists.h"

/**
 * sum_dlistint - function to return sum of data in list
 * @head: list to return sum of
 * Return: sum of data or 0 if list empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
