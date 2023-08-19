#include "lists.h"

/**
 * delete_dnodeint_at_index - remove a node
 * @head: pointer to the head
 * @index: index to be deleted
 * Return: 1 if success -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		current = *head;
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	current = *head;
	prev = NULL;
	while (current)
	{
		if (i == index && prev != NULL)
			prev->next = current->next;
		if (i == index)
		{
			if (current->next != NULL)
				current->next->prev = prev;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		i++;
	}
	return (-1);
}
