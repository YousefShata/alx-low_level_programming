#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add a new node to list
 * @head: head in the node
 * @str: string stored in the list
 * Return: address of the new list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[n])
		n++;
	new->str = strdup(str);
	new->len = n;
	new->next = *head;
	*head = new;
	return (*head);
}
