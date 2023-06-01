#include <stdlib.h>
#include "lists.h"
/**
 * free_list - linked list is freed
 * @head: frees list_t list
 */
void free_list(list_t *head)
{
	list_t *a;

	while (head)
	{
		a = head->next;
		free(head->str);
		free(head);
		head = a;
	}
}
