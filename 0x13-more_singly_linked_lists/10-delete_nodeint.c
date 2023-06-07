#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the nodes at index
 * @head: pointer to the first node
 * @index: indexx of the node that should be deleted
 *Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c, *p;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		c = *head;
		*head = c->next;
		free(c);
		return (1);
	}
	p = *head;
	c = (*head)->next;
	for (i = 1; i < index; i++)
	{
		if (c == NULL)
			return (-1);
		p = c;
		c = c->next;
	}
	p->next = c->next;
	free(c);
	return (1);
}
