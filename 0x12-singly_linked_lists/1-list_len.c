#include <stdlib.h>
#include "lists.h"
/**
 * list_len - the number of elements in a linked list is returned
 * @h: pointer
 * Return: h elements
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
