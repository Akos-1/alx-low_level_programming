#include "hash_tables.h"
/**
 * hash_table_get - add an element to the hash table
 * @ht: a pointer to the hash table
 * @key: the key to be added
 * Return: NULL if the key cannot be matched
 * Otherwise the value associated with the ket in ht
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	index = hash_djb2((const unsigned char *)key) % ht->size;
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}

	return (NULL);
}
