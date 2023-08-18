#include "lists.h"

/**
 * add_dnodeint - add node to list
 * @head: pointer to head of list
 * @n: place of the node
 * Return: adress of the elemnt
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *next = malloc(sizeof(dlistint_t));

	if (next == NULL)
		return (NULL);
	next->n = n;
	next->next = NULL;
	next->prev = NULL;

	if (*head == NULL)
	{
		*head = next;
		return (next);
	}
	else
	{
	next->next = *head;
	(*head)->prev = next;
	*head = next;
	return (next);
	}
}
