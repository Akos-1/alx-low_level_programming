#include "lists.h"

/**
 * print_listint_safe - prints a linked list safely
 * @head: pointer
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *c = head, *loop_start = NULL;

	while (c != NULL)
	{
		printf("[%p] %dn", (void *)c, c->n);
		num++;
		if (c > c->next || c == loop_start)
		{
			printf("-> [%p} %dn", (void *)c->next, c->next->n);
			break;
		}
		if (c == head && c->next != NULL)
		{
			loop_start = c;
		}
		c = c->next;
	}
	if (c == NULL)
	{
		return (num);
	}
	else
	{
		exit(98);
	}
}
