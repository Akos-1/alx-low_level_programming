#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: a pointer to the hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	int first_entry = 1;
	unsigned long int i;

	printf("{");

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; ++i)
	{
		hash_node_t *current = ht->array[i];

		while (current != NULL)
		{
			if (!first_entry)
			{
				printf(", ");
			}
			else
			{
				first_entry = 0;
			}

			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
		}
	}
	printf("}\n");
}
