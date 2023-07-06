#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *counter;

	if (!head)
		return;

	counter = *head;
	while (current)
	{
		counter = current;
		current = counter->next;
		free(counter);
	}
	*head = NULL;
	head = NULL;
}
