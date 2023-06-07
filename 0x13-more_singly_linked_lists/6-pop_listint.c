#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer
 * Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	t = *head;
	n = t->n;
	*head = (*head)->next;
	free(t);

	return (n);
}
