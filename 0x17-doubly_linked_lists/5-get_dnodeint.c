#include "lists.h"

/**
 * get_dnodeint_at_index - get a specifc node
 * @head: pointer to start of the list
 * @index: index
 * Return: return the adress of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	current = head;
	while (current)
	{
		if (i == index)
			return (current);
		i++;
		current = current->next;
	}
	return (NULL);
}
