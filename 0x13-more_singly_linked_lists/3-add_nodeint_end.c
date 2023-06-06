#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of the list
 * @n: inputed value to be added to the new node
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n, *t;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->next = NULL;
	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}
	t = *head;
	while (t->next != NULL)
		t = t->next;
	t->next = new_n;
	return (new_n);
}
