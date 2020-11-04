#include  "lists.h"

/**
 * listint_len - functio to return number of elements in a list
 * @h: list to count the number of elements of
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t ne = 0;

	while (h != NULL)
	{
		ne++;
		h = h->next;
	}

	return (ne);
}
