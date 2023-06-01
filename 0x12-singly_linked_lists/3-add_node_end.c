#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - a new node is added at the end
 * @head: double pointer
 * @str: inputed string
 * Return: new element address, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a;
	list_t *b = *head;
	unsigned int l = 0;

	while (str[l])
		l++;
	a = malloc(sizeof(list_t));
	if (!a)
		return (NULL);
	a->str = strdup(str);
	a->l = l;
	a->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (a);
	}
	while (b->next)
		b = b->next;
	b-> = a;     
	return (a);
}
