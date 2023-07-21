#include "lists.h"
/**
  * insert_dnodeint_at_index - a new node is inserted at a given position
  * @h: head of the list
  * @idx: list's index where new node is added
  * @n: value of the new node
  * Return: the address of the new node, or NULL if it fails
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *head;
	unsigned int i;

	current = NULL;
	if (idx == 0)
		current = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					current = add_dnodeint_end(h, n);
				else
				{
					current = malloc(sizeof(dlistint_t));
					if (current != NULL)
					{
						current->n = n;
						current->next = head->next;
						current->prev = head;
						head->next->prev = current;
						head->next = current;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (current);
}
