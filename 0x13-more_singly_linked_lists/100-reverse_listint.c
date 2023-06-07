#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer
 * Return: a pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pr = NULL, *c = *head, *next = NULL;

	while (c != NULL)
	{
		next = c->next;
		c->next = pr;
		pr = c;
		c = next;
	}
	*head = pr;
	return (*head);
}
