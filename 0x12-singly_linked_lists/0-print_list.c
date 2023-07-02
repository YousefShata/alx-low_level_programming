#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints a linked list
 * @h: the head of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;
	
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
	
		num++;
		h = h->next;
	}
	return (num);
}
