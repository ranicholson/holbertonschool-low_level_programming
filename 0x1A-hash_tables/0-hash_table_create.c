#include "hash_tables.h"

/**
 * *hash_table_create - function to create a hash table
 * @size: size of the array in table
 * Return: Pointer to the newly created table or NULL upon error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x = 0;
	hash_table_t *nhtable = NULL;

	nhtable = malloc(sizeof(hash_table_t));

	if (nhtable == NULL)
		return (NULL);

	nhtable->array = malloc(sizeof(hash_node_t) * size);

	if (nhtable->array == NULL)
	{
		free(nhtable);
		return (NULL);
	}

	nhtable->size = size;

	for (x = 0; x < size; x++)
		nhtable->array[x] = NULL;

	return (nhtable);
}
