#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a new node is added at the beginning of a linked test
 * @head: double pointer
 * @str: inputed new string
 * Return: the new element address, or NULL if not
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *a;
	unsigned int len = 0;

	while (str[len])
		len++;
	a = malloc(sizeof(list_t));
	if (!a)
		return (NULL);
	a->str = strdup(str);
	a->len = len;
	a->next = (*head);
	(*head) = a;
	return (*head);
}
