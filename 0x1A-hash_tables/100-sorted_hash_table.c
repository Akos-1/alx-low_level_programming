#include "hash_tables.h"

/**
 * shash_table_create - Function to create a sorted hash table
 * return: pointer
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    if (size == 0)
    {
        return (NULL);
    }

    shash_table_t *ht = (shash_table_t *)malloc(sizeof(shash_table_t));
    if (ht == NULL)
    {
        return (NULL);
    }

    ht->size = size;
    ht->array = (shash_node_t **)calloc(size, sizeof(shash_node_t *));
    if (ht->array == NULL)
    {
        free(ht);
        return NULL;
    }

    ht->shead = NULL;
    ht->stail = NULL;

    return ht;
}

// Function to insert a key-value pair into the sorted hash table
int shash_table_set(shash_table_t *ht, const char *key, const char *value) {
    if (ht == NULL || key == NULL || value == NULL) {
        return 0;  // Invalid input
    }

    unsigned long int index = hash_djb2((const unsigned char *)key) % ht->size;

    shash_node_t *new_node = (shash_node_t *)malloc(sizeof(shash_node_t));
    if (new_node == NULL) {
        return 0;  // Memory allocation failed
    }

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[index];
    new_node->sprev = NULL;
    new_node->snext = NULL;

    // Insert the new node at the beginning of the list
    if (ht->array[index] != NULL) {
        ht->array[index]->sprev = new_node;
    }
    ht->array[index] = new_node;

    // Insert the key-value pair into the sorted list
    shash_node_t *current = ht->shead;
    shash_node_t *prev = NULL;

    while (current != NULL && strcmp(key, current->key) > 0) {
        prev = current;
        current = current->snext;
    }

    if (prev == NULL) {
        // Insert at the beginning of the sorted list
        new_node->snext = ht->shead;
        ht->shead = new_node;
    } else {
        new_node->snext = current;
        prev->snext = new_node;
    }

    if (new_node->snext == NULL) {
        // This is the last node, update the tail
        ht->stail = new_node;
    }

    return 1;  // Success
}

// Function to retrieve the value associated with a key from the sorted hash table
char *shash_table_get(const shash_table_t *ht, const char *key) {
    if (ht == NULL || key == NULL) {
        return NULL;  // Invalid input
    }

    unsigned long int index = hash_djb2((const unsigned char *)key) % ht->size;

    shash_node_t *current = ht->array[index];
    while (current != NULL) {
        if (strcmp(key, current->key) == 0) {
            return current->value;  // Key found
        }
        current = current->next;
    }

    return NULL;  // Key not found
}

/
void shash_table_print(const shash_table_t *ht)
{
	int first_entry =1;

    if (ht == NULL)
    {
        return;
    }

    shash_node_t *current = ht->shead;

    printf("{");

    while (current != NULL)
    {
        if (!first_entry)
	{
            printf(", ");
        } else
	{
            first_entry = 0;
        }

        printf("'%s': '%s'", current->key, current->value);
        current = current->snext;
    }

    printf("}\n");
}

/**
 * shash_table_print_rev - Function to print the sorted hash table in reverse order
 * @ht: a pointer to the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	    int first_entry = 1;
    if (ht == NULL)
    {
        return;
    }

    shash_node_t *current = ht->stail;

    printf("{");

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
        current = current->sprev;
    }

    printf("}\n");
}

/**
 * shash_table_delete - delete a shash table
 * @ht: a pointer to the shash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;

    if (ht == NULL)
    {
       return;
    }

    for (i = 0; i < ht->size; ++i)
    {
        shash_node_t *current = ht->array[i];

	while (current != NULL)
	{
            shash_node_t *temp = current;
            current = current->next;

            free(temp->key);
            free(temp->value);

            free(temp);
        }
    }

    free(ht->array);
    free(ht);
}
