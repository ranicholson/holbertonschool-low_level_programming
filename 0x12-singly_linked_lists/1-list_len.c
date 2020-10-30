#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: list to count the number of elements in
 * Return: number of elements in the linked list provided
 */

size_t list_len(const list_t *h)
{
	size_t ne = 0;

	while (h)
	{
		ne++;
		h = h->next;
	}

	return (ne);
}
