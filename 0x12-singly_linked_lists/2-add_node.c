#include "lists.h"

/**
 * add_node - function to add new node at beginning of list
 * @head: current head of list
 * @str: string stored in the struct
 * Return: address of the new element, or NULL upon failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nhead;
	unsigned int x;

	nhead = malloc(sizeof(list_t));

	if (nhead == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		;

	nhead->str = strdup(str);
	nhead->len = x;
	nhead->next = *head;
	*head = nhead;

	return (*head);
}
