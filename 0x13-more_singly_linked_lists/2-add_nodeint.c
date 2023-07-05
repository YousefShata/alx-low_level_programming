#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to head of list
 * @n: integer to be added
 * Return: address of node added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nNode = malloc(sizeof(listint_t));
	if (nNode == NULL || *head == NULL)
		return (NULL);

	nNode->n = n;
	nNode->next = NULL;
	if (*head)
	{
		nNode->next = *head;
	}
	*head = nNode;
	return (nNode);	
}
