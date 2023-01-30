#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_listint - prints the elements of the linked list 
 * @h: node pointer to the list (usually the head of the list)
 *
 * Return: number of nodes of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t node_counter, i = 0;

	if (h == NULL)
		return node_counter;

	while (h->next)
	{
		printf("%d\n", h->n);
		++node_counter;
		h = h->next;
	}
	return (node_counter);
}
