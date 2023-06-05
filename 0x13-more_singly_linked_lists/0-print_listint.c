#include "lists.h"

/**
 * print_listint - displays the elements of a listint_t list
 * @h: a pointer to the head of the listint_t list
 * Return: the number of nodes in the listint_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
