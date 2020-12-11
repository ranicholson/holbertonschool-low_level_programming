#include "lists.h"

/**
 * print_dlistint - function to print all elements of a list
 * @h: head of list to print
 * Return: number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nn = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nn++;
		h = h->next;
	}

	return (nn);
}
