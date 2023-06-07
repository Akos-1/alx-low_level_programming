#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * @head: pointer
 * @index: given index
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *c = head;

	for (i = 0; i < index && c != NULL; i++)
	{
		c = c->next;
	}
	if (i == index && c != NULL)
	{
		return (c);
	}
	else
	{
		return (NULL);
	}
}
