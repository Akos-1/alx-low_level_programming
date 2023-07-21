#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of the list
 * @index: index of the node
 * Return: the nth of node, if the node does not exist,
 * return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}
	if (head != NULL && count == index)
	{
		return (head);
	}
	return (NULL);
}
