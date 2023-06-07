#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer
 * @idx: index of the list
 * @n: variable
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *c = *head;
	listint_t *new_n;

	if (idx == 0)
	{
		new_n = malloc(sizeof(listint_t));
		if (new_n == NULL)
		{
			return (NULL);
		}
		new_n->n = n;
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}
	for (i = 0; i < idx - 1 && c != NULL; i++)
	{
		c = c->next;
	}
	if (c == NULL)
	{
		return (NULL);
	}
	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
	{
		return (NULL);
	}
	new_n->n = n;
	new_n->next = c->next;
	c->next = new_n;
	return (new_n);
}
