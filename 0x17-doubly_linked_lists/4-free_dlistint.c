#include "lists.h"

/**
 * free_dlistint - free list
 * @head: header to list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while (head)
	{
		head = head->next;
		free(current);
		current = head;
	}
}
