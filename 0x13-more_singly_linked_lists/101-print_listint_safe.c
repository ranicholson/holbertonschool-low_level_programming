#include "lists.h"

/**
 * print_listint_safe - function to print a linked list
 * @head: head to print out
 * Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int count = 0;
	const listint_t *j = head;

	if (head == NULL)
		exit(98);

	while (j)
	{
		if (j == head->next->next && count > 3)
			exit(98);

		printf("[%p] %d\n", (void *)j, j->n);
		j = j->next;
		count++;
	}

	return (count);
}
