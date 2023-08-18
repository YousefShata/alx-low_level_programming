#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print dlists
 * @h: double linked list pointer
 * Return: number o nudes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *next = (dlistint_t *) h;
	int nodes = 0;

	while (next)
	{
		printf("%d\n", next->n);
		next = next->next;
		nodes++;
	}
	return (nodes);
}
