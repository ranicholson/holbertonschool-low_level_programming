#include  "lists.h"

/**
 * print_listint - function that prints all elements of a list
 * @h: list to print elements from
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nn;

	while (h)
	{
		printf("%d\n", h->n);
		nn++;
		h = h->next;
	}

	return (nn);
}
