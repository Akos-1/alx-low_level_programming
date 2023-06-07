#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * @head: pointer
 * Return: sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}

