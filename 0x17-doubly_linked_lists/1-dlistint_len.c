#include "lists.h"

/**
 * dlistint_len - get number of elements
 * @h: pointer to the header
 * Return: total numbe of elemts in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *next = (dlistint_t *) h;
	int nodes = 0;

	while (next)
	{
		next = next->next;
		nodes++;
	}
	return (nodes);
}
