#include <stdio.h>
#include "lists.h"
/**
 * print_list - displays all elements on the list_t list
 * @h: pointer to the list's head
 * Return: number of nodes on the list
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}	return (a);
}
