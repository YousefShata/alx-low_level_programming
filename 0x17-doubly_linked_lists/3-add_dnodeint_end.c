#include "lists.h"

/**
 * add_dnodeint_end - add node to list
 * @head: pointer to head of list
 * @n: place of the node
 * Return: adress of the elemnt
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		current = *head;
		while (current)
		{
			if (current->next == NULL)
			{
				new->prev = current;
				current->next = new;
				return (new);
			}
			current = current->next;
		}
	}
	return (NULL);
}
