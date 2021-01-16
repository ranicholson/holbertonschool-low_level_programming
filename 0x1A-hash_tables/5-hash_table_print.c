#include "hash_tables.h"

/**
 * hash_table_print - function to print hash table
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int x = 0;
	int cspa = 0;

	if (ht == NULL)
		;

	else
	{
		printf("{");
		while (x < ht->size)
		{
			tmp = ht->array[x];
			if (tmp == NULL)
			{
				x++;
				continue;
			}
			if (cspa == 1)
			{
				cspa = 0;
				printf(", ");
			}
			while (tmp != NULL)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp == NULL)
				{
					cspa = 1;
					break;
				}
				printf(", ");
			}
			x++;
		}
		printf("}\n");
	}
}
