#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer
 * Return: size of the list freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	listint_t *t;

	while (*h != NULL && (*h)->next >= *h)
	{
		t = *h;
		*h = (*h)->next;
		free(t);
		num++;
	}
	if (*h != NULL)
	{
		t = *h;
		*h = NULL;
		free(t);
		num++;
	}
	return (num);
}

