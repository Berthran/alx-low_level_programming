#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of nodes in a doubly linked list
 * @h: the dlist header
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *dlist_ptr;
	size_t nodes_count = 0;

	if (h == NULL)
		return (0);

	dlist_ptr = h;
	while (dlist_ptr != NULL)
	{
		dlist_ptr = dlist_ptr->next;
		nodes_count += 1;
	}
	return (nodes_count);
}
