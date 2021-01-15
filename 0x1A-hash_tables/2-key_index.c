#include "hash_tables.h"
/**
 * key_index - function that returns index of a key
 * @key: key to be indexed
 * @size: size of the array of the hash table
 * Return: index of the key provided
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
