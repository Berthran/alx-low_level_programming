#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns the number of nodes in the linked list
 * @h: node pointer to the list (usually the headd of the list)
 *
 * Return: number of nodes of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t node_counter;

	if (h == NULL)
		return node_counter;

	while (h)
	{
		++node_counter;
		h = h->next;
	}
	return (node_counter);
}
