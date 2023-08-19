#include "lists.h"

/**
 * insert_dnodeint_at_index - insert list in index
 * @h: list head
 * @idx: specifc index
 * @n: int value
 * Return: return address of the nude or NULL if fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *prev;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	current = *h;
	prev = NULL;
	while (current)
	{
		if (i == idx)
		{
			prev->next = new;
			current->prev = new;
			new->next = current;
			new->prev = prev;
			return (new);
		}
		prev = current;
		current = current->next;
		i++;
	}
	free(new);
	if (i == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
