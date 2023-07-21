#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: list's head
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
