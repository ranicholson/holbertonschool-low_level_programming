#include "hash_tables.h"

/**
 * hash_table_set - function to add element to a hash table
 * @ht: hash table to add element to
 * @key: key to index and add to node
 * @value: value to be stored in node
 * Return: 1 for success otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nhnod = NULL, *thnod = NULL;
	unsigned long int idx;
	char *tval = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	tval = strdup(value);
	if (tval == NULL)
		return (0);
	nhnod = malloc(sizeof(hash_node_t));
	if (nhnod == NULL)
	{
		free(tval);
		return (0);
	}
	nhnod->key = strdup(key);
	nhnod->value = tval;
	nhnod->next = NULL;
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] != NULL)
	{
		thnod = ht->array[idx];
		while (thnod != NULL)
		{
			if (strcmp(thnod->key, key) == 0)
			{
				free(ht->array[idx]->value);
				ht->array[idx]->value = tval;
				free(nhnod);
				return (1);
			}
			thnod = thnod->next;
		}
		thnod = ht->array[idx];
		ht->array[idx] = nhnod;
		nhnod->next = thnod;
		return (1);
	}
	ht->array[idx] = nhnod;
	return (1);
}
