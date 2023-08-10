#include "hash_tables.h"

/**
 * key_index - uses this hash function to calculate the index at
 * which the key should be stored in the hash table.
 * @key: the key to get the index of
 * @size: size of the array of the hash table.
 * Return: the index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	return (hash_value % size);
}
