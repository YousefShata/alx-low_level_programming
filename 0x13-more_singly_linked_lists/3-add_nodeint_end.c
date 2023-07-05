#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to head of list
 * @n: integer to be added
 * Return: address of node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastnode = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (lastnode == NULL)
		return (NULL);

	lastnode->n = n;
	lastnode->next = NULL;
	while (*head)
	{
		if (current->next == NULL)
		{
			*head = lastnode;
		}
		else
			current  = current->next;
	}
	return (lastnode);
}
