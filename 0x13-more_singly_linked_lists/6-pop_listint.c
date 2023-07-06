#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: double pointer to head of list;
 * Return: value at head
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int val;

	if (!head || !(*head))
		return (0);
	current = *head;
	val = current->n;
	*head = current->next;
	free(current);
	return (val);
}
