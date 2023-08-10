#include "hash_tables.h"
/**
 * hash_table_set - add an element to the hash table
 * @ht: a pointer to the hash table
 * @key: the key to be added
 * @value: the key's value
 * Return: 1 if successful or 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}

	index = hash_djb2((const unsigned char *)key) % ht->size;

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = (value != NULL) ? strdup(value) : NULL;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
