#include "lists.h"

/**
 * dlistint_len - function that returns number of elements in a list
 * @h: head of list
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nn = 0;

	while (h)
	{
		nn++;
		h = h->next;
	}

	return (nn);
}
