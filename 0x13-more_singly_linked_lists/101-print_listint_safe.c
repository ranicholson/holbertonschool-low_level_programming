#include "lists.h"

/**
 * print_listint_safe - function to print a linked list
 * @head: head to print out
 * Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *j = NULL;

	if (head == NULL)
		exit(98);

	j = head;

	while (j)
	{
		if (j == head->next->next && count > 2)
			break;

		printf("[%p] %d\n", (void *)j, j->n);
		j = j->next;
		count++;
	}

	return (count);
}
