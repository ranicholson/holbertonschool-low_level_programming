#include "hash_tables.h"

/**
 * *hash_table_get - function to retrieve value associated with a key
 * @ht: hash table to search
 * @key: key to search for
 * Return: value associated with the element or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp = NULL;

	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
		return (NULL);

	tmp = ht->array[idx];

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
